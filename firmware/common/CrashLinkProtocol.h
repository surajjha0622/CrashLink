#pragma once
#include <Arduino.h>

#define CL_MAGIC "CL1"
#define CL_VEHICLE_ID 1
#define CL_RELAY_ID   2
#define CL_GATEWAY_ID 3

#define CL_LORA_FREQ 433E6  // Verify module and legal frequency

struct CrashPacket {
  char magic[4];
  uint8_t source;
  uint8_t lastHop;
  uint8_t type;       // 0 = heartbeat, 1 = crash alert
  uint32_t sequence;
  float latitude;
  float longitude;
  uint16_t sensorFlags;
};

// Shared SX1278 pins — change to match your PCB.
#define LORA_SCK  18
#define LORA_MISO 19
#define LORA_MOSI 23
#define LORA_SS   5
#define LORA_RST  14
#define LORA_DIO0 26

inline bool initCrashLinkRadio() {
  SPI.begin(LORA_SCK, LORA_MISO, LORA_MOSI, LORA_SS);
  LoRa.setPins(LORA_SS, LORA_RST, LORA_DIO0);

  if (!LoRa.begin(CL_LORA_FREQ)) return false;

  LoRa.setSpreadingFactor(9);
  LoRa.setSignalBandwidth(125E3);
  LoRa.setCodingRate4(5);
  LoRa.setSyncWord(0x12);

  return true;
}