#define TRIG_PIN 9  // Trigger pin
#define ECHO_PIN 10 // Echo pin

long duration;  // Duration of the pulse
int distance;   // Calculated distance

void setup() {
  Serial.begin(9600);
  
  // Set the Trigger and Echo pins
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Send a pulse to the Trigger pin
  digitalWrite(TRIG_PIN, LOW);  
  delayMicroseconds(2);  // Wait for 2 microseconds
  digitalWrite(TRIG_PIN, HIGH);  
  delayMicroseconds(10); // Send a 10-microsecond pulse
  digitalWrite(TRIG_PIN, LOW);
  
  // Read the time for the pulse to return to the Echo pin
  duration = pulseIn(ECHO_PIN, HIGH);
  
  // Calculate the distance (speed of sound is 343 m/s or 0.034 cm/µs)
  distance = duration * 0.034 / 2;  // Divide by 2 because pulse travels to the object and back
  
  // Print the distance to the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(500);  // Wait for half a second before the next measurement
}
