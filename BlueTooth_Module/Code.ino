char receivedData;  // Variable to store received data

void setup() {
  Serial.begin(9600);  // Start serial communication
  Serial.println("Bluetooth Communication Started...");
}

void loop() {
  // Check if data is available from Bluetooth
  if (Serial.available() > 0) {
    receivedData = Serial.read();  // Read received data from Bluetooth
    
    // If the received data is '1', print 'Hello'
    if (receivedData == '1') {
      Serial.println("Hello");  // Print 'Hello' to the Serial Monitor
    }
  }
}
