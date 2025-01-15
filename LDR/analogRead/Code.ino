int ldrPin = A0;  // Pin connected to the LDR
int ldrValue = 0;  // Variable to store the LDR value

void setup() {
  Serial.begin(9600);    // Start the serial communication
}

void loop() {
  ldrValue = analogRead(ldrPin);  // Read the LDR value from the analog pin
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);  // Print the LDR value to the serial monitor

  delay(1000);  // Wait for 1 second before reading again
}
