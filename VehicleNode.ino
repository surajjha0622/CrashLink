#include <LoRa.h>
#include <Wire.h>
#include <SPI.h>
#include <SoftwareSerial.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_MPU6050.h>
#define THRESHOLD 15.0


Adafruit_MPU6050 mpu;


void setup () 
   {
      Serial.begin(115200);
      if (!mpu.begin()) {
        Serial.println("Failed to find MPU6050 chip");
        while (1);
        }
      }
          
   };
void loop () 
   {detectCrash();
      if (totalAccel > THRESHOLD) {
      Serial.println("Crash detected! Sending alert...");
      sendAlert();
   }
          
   };

void detectCrash() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);
  float totalAccel = sqrt(sq(a.acceleration.x) + sq(a.acceleration.y) + sq(a.acceleration.z));
   
}