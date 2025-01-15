int waterSensorPin = A0;  // Pin connected to the water sensor's analog output
int sensorValue = 0;      // Variable to store the sensor value

void setup() {
  Serial.begin(9600);    // Initialize serial communication
}

void loop() {
  sensorValue = analogRead(waterSensorPin);  // Read the sensor value from the analog pin
  Serial.print("Water Sensor Value: ");      // Print the sensor value to the Serial Monitor
  Serial.println(sensorValue);
  
  // Check if water is detected (threshold depends on your sensor)
  if (sensorValue > 500) {
    Serial.println("Water detected!");
  } else {
    Serial.println("No water detected.");
  }
  
  delay(1000);  // Delay 1 second before reading again
}
