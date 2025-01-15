int waterSensorPin = 2;  // Pin connected to the water sensor's digital output
int sensorState = 0;     // Variable to store the sensor state (HIGH or LOW)

void setup() {
  pinMode(waterSensorPin, INPUT);  // Set the water sensor pin as input
  Serial.begin(9600);              // Initialize serial communication
}

void loop() {
  sensorState = digitalRead(waterSensorPin);  // Read the sensor state

  if (sensorState == HIGH) {
    Serial.println("Water detected!");
  } else {
    Serial.println("No water detected.");
  }
  
  delay(1000);  // Wait 1 second before reading again
}
