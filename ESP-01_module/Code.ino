#include <SoftwareSerial.h>

SoftwareSerial esp(0, 1); // RX, TX (using Arduino's TX/RX pins)

void setup() {
  Serial.begin(9600);  // Communication with Serial Monitor
  esp.begin(9600);     // Communication with ESP-01
  Serial.println("ESP-01 Initialized. Ready for AT Commands");
}

void loop() {
  if (Serial.available()) {
    esp.write(Serial.read()); // Send data from Serial Monitor to ESP
  }
  if (esp.available()) {
    Serial.write(esp.read()); // Send data from ESP to Serial Monitor
  }
}
