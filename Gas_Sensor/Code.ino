int gasPin = A0;  // Pin connected to the gas sensor
int gasValue = 0;  // Variable to store the sensor value

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  gasValue = analogRead(gasPin);  // Read the gas sensor value
  Serial.print("Gas Sensor Value: ");
  Serial.println(gasValue);  // Print the value to the Serial Monitor
  
  // Simple logic to check gas concentration (threshold example)
  if (gasValue > 300) {
    Serial.println("Gas detected!");
  } else {
    Serial.println("No gas detected.");
  }

  delay(1000);  // Wait for 1 second before reading again
}
