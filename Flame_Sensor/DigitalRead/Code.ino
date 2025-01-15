int flameSensorPin = 2;  // Pin connected to the flame sensor's digital output
int sensorState = 0;     // Variable to store the sensor state (HIGH or LOW)

void setup() {
  pinMode(flameSensorPin, INPUT);  // Set the flame sensor pin as input
  Serial.begin(9600);              // Initialize serial communication
}

void loop() {
  sensorState = digitalRead(flameSensorPin);  // Read the sensor state

  if (sensorState == HIGH) {
    Serial.println("No flame detected.");
  } else {
    Serial.println("Flame detected!");
  }
  
  delay(1000);  // Wait 1 second before reading again
}
