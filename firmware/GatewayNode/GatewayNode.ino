#include <SPI.h>
#include <LoRa.h>
#include "../common/CrashLinkProtocol.h"

#define GATEWAY_ID 3

HardwareSerial modem(2);

#define MODEM_RX 16
#define MODEM_TX 17

void setup() {
  Serial.begin(115200);

  // UART is initialized for later A7670 integration.
  // The modem must have its own suitable external power supply.
  modem.begin(115200, SERIAL_8N1, MODEM_RX, MODEM_TX);

  if (!initCrashLinkRadio()) {
    Serial.println("LoRa initialization failed");
    while (true) delay(1000);
  }

  Serial.println("Gateway ready");
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
      (p.lastHop != CL_VEHICLE_ID &&
       p.lastHop != CL_RELAY_ID)) {
    Serial.println("Rejected packet");
    return;
  }

  Serial.printf(
    "Gateway RX: source=%u hop=%u type=%u seq=%lu "
    "lat=%.6f lon=%.6f RSSI=%d\n",
    p.source, p.lastHop, p.type,
    (unsigned long)p.sequence,
    p.latitude, p.longitude, LoRa.packetRssi()
  );

  if (p.type == 1) {
    Serial.println("CRASH ALERT RECEIVED");
    Serial.println("Cellular notification not yet implemented.");
  }
}