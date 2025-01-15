#include <SoftwareSerial.h>

SoftwareSerial BTSerial(6, 7);  // RX, TX pins for Bluetooth communication

char receivedData;  // Variable to store received data

void setup() {
  Serial.begin(9600);      // Start serial communication for debugging
  BTSerial.begin(9600);    // Start Bluetooth communication at 9600 baud rate
  Serial.println("Bluetooth Communication Started...");
}

void loop() {
  // Check if data is available from Bluetooth
  if (BTSerial.available() > 0) {
    receivedData = BTSerial.read();  // Read received data from Bluetooth
    
    // If the received data is '1', print 'Hello'
    if (receivedData == '1') {
      Serial.println("Hello");  // Print 'Hello' to the Serial Monitor
      BTSerial.println("Hello"); // Send 'Hello' back to Bluetooth
    }
  }
}
