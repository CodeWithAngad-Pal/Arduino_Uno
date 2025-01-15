int flameSensorPin = A0;  // Pin connected to the flame sensor's analog output
int sensorValue = 0;      // Variable to store the sensor value

void setup() {
  Serial.begin(9600);    // Initialize serial communication
}

void loop() {
  sensorValue = analogRead(flameSensorPin);  // Read the sensor value from the analog pin
  Serial.print("Flame Sensor Value: ");
  Serial.println(sensorValue);

  // If the sensor value is low, flame is detected
  if (sensorValue < 300) {
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame detected.");
  }
  
  delay(1000);  // Delay 1 second before reading again
}
