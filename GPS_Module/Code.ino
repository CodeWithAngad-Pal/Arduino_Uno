#include <SoftwareSerial.h>

SoftwareSerial gps(4, 3); // RX, TX

void setup() {
  Serial.begin(9600); // For debugging
  gps.begin(9600);    // For GPS module communication
  Serial.println("Initializing GPS Module...");
}

void loop() {
  while (gps.available()) {
    char c = gps.read(); // Read data from the GPS module
    Serial.print(c);     // Print GPS data to the serial monitor
  }
}
