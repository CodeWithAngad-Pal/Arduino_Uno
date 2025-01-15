int moisturePin = A0;  // Pin connected to the sensor
int moistureValue = 0;  // Variable to store the sensor value

void setup() {
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  moistureValue = analogRead(moisturePin);  // Read the moisture level
  Serial.print("Soil Moisture Level: ");
  Serial.println(moistureValue);  // Print the moisture value to Serial Monitor
  
  // Simple logic to print dry or watered status
  if (moistureValue < 400) {
    Serial.println("Soil is Dry!");
  } else if (moistureValue > 600) {
    Serial.println("Soil is Watered!");
  } else {
    Serial.println("Soil is Moist.");
  }

  delay(1000);  // Wait for 1 second before reading again
}
