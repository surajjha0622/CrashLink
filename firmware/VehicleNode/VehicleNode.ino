#include <SPI.h>
#include <LoRa.h>
#include "../common/CrashLinkProtocol.h"

#define VEHICLE_ID 1
#define GPS_RX 16
#define GPS_TX 17
#define BUZZER_PIN 25

uint32_t sequenceNo = 0;
bool simulatedCrash = false;
unsigned long lastHeartbeat = 0;

void sendPacket(uint8_t type) {
  CrashPacket p = {};

  strncpy(p.magic, CL_MAGIC, sizeof(p.magic) - 1);
  p.source = VEHICLE_ID;
  p.lastHop = VEHICLE_ID;
  p.type = type;
  p.sequence = ++sequenceNo;

  // Replace with actual NEO-6M GPS parsing.
  p.latitude = 0.0f;
  p.longitude = 0.0f;

  // Flags currently indicate no validated sensor data.
  p.sensorFlags = 0;

  LoRa.beginPacket();
  LoRa.write((uint8_t*)&p, sizeof(p));

  if (LoRa.endPacket() == 1) {
    Serial.printf("TX type=%u seq=%lu\n",
                  p.type, (unsigned long)p.sequence);
  } else {
    Serial.println("LoRa transmission failed");
  }
}

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);

  if (!initCrashLinkRadio()) {
    Serial.println("LoRa initialization failed");
    while (true) delay(1000);
  }

  Serial.println("Vehicle node ready");
  Serial.println("Enter C to simulate a crash alert");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();

    if (c == 'C' || c == 'c') {
      simulatedCrash = true;
      digitalWrite(BUZZER_PIN, HIGH);
      sendPacket(1);
    }

    if (c == 'R' || c == 'r') {
      simulatedCrash = false;
      digitalWrite(BUZZER_PIN, LOW);
    }
  }

  if (millis() - lastHeartbeat >= 5000) {
    lastHeartbeat = millis();
    sendPacket(0);
  }
}