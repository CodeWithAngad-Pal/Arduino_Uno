int irPin = A0;  // Pin connected to the IR sensor's analog output
int irValue = 0;  // Variable to store the IR sensor value

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  irValue = analogRead(irPin);  // Read the IR sensor's analog output value

  Serial.print("IR Sensor Value: ");
  Serial.println(irValue);  // Print the IR sensor value to the serial monitor

  delay(1000);  // Wait for 1 second before reading again
}
