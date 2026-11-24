
#include <Arduino.h>

#define FLASH_LED 4

void setup() {
    pinMode(FLASH_LED, OUTPUT);

    Serial.begin(115200);
    delay(2000);

    Serial.println();
    Serial.println("========================");
    Serial.println("ESP32-CAM SERIAL TEST");
    Serial.println("ESP32 IS RUNNING");
    Serial.println("========================");
}

void loop() {
    digitalWrite(FLASH_LED, HIGH);
    Serial.println("LED ON");
    delay(1000);

    digitalWrite(FLASH_LED, LOW);
    Serial.println("LED OFF");
    delay(1000);
}

