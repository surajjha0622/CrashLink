#include <SPI.h>
#include <LoRa.h>
#include "../common/CrashLinkProtocol.h"

#define RELAY_ID 2
#define LED_PIN 2
#define BUZZER_PIN 25

struct SeenPacket {
  uint8_t source;
  uint32_t sequence;
};

SeenPacket seen[32] = {};
uint8_t seenIndex = 0;

bool alreadySeen(uint8_t source, uint32_t seq) {
  for (const auto &p : seen) {
    if (p.source == source && p.sequence == seq)
      return true;
  }

  seen[seenIndex] = {source, seq};
  seenIndex = (seenIndex + 1) % 32;
  return false;
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  if (!initCrashLinkRadio()) {
    Serial.println("LoRa initialization failed");
    while (true) delay(1000);
  }

  Serial.println("Relay node ready");
}

void loop() {
  int size = LoRa.parsePacket();
  if (!size) return;

  if (size != sizeof(CrashPacket)) {
    while (LoRa.available()) LoRa.read();
    Serial.println("Rejected invalid packet size");
    return;
  }

  CrashPacket p = {};
  if (LoRa.readBytes((uint8_t*)&p, sizeof(p)) != sizeof(p))
    return;

  if (strcmp(p.magic, CL_MAGIC) != 0 ||
      p.source != CL_VEHICLE_ID ||
      p.lastHop == RELAY_ID) {
    Serial.println("Rejected packet");
    return;
  }

  if (alreadySeen(p.source, p.sequence)) {
    Serial.println("Duplicate ignored");
    return;
  }

  Serial.printf("RX source=%u type=%u seq=%lu RSSI=%d\n",
                p.source, p.type,
                (unsigned long)p.sequence, LoRa.packetRssi());

  if (p.type == 1) {
    digitalWrite(LED_PIN, HIGH);
    digitalWrite(BUZZER_PIN, HIGH);
  }

  p.lastHop = RELAY_ID;

  // Blocking TX switches the radio out of receive mode temporarily.
  LoRa.beginPacket();
  LoRa.write((uint8_t*)&p, sizeof(p));

  if (LoRa.endPacket() == 1)
    Serial.println("Packet forwarded");
  else
    Serial.println("Forward failed");

  LoRa.receive();
}