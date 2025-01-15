int moisturePin = 2;  // Pin connected to the sensor's digital output
int moistureValue = 0; // Variable to store the sensor value

void setup() {
  pinMode(moisturePin, INPUT);  // Set the digital pin as an input
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  moistureValue = digitalRead(moisturePin);  // Read the moisture level

  // Simple logic to print dry or watered status
  if (moistureValue == LOW) {
    Serial.println("Soil is Dry!");  // If the value is LOW, soil is dry
  } else {
    Serial.println("Soil is Watered!");  // If the value is HIGH, soil is watered
  }

  delay(1000);  // Wait for 1 second before reading again
}
