char receivedData;  // Variable to store received data from Bluetooth

void setup() {
  Serial.begin(9600);  // Start serial communication at 9600 baud rate
  Serial.println("Bluetooth Communication Started...");
}

void loop() {
  if (Serial.available() > 0) {
    receivedData = Serial.read();  // Read incoming data from Bluetooth
    Serial.print("Received Data: ");
    Serial.println(receivedData);  // Print received data to the Serial Monitor
  }
}
