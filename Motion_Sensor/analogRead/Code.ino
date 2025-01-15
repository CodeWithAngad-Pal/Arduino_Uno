int pirPin = A0;   // Pin connected to the PIR sensor's analog output
int pirValue = 0;  // Variable to store the PIR sensor value

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  pirValue = analogRead(pirPin);  // Read the PIR sensor's analog output value

  Serial.print("PIR Sensor Value: ");
  Serial.println(pirValue);  // Print the PIR sensor value to the serial monitor

  delay(1000);  // Wait for 1 second before reading again
}
