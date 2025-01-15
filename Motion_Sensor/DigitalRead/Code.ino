int pirPin = 2;   // Pin connected to the PIR sensor's output
int pirState = 0;  // Variable to store the state of the PIR sensor

void setup() {
  pinMode(pirPin, INPUT);  // Set the PIR sensor pin as an input
  Serial.begin(9600);      // Start serial communication
}

void loop() {
  pirState = digitalRead(pirPin);  // Read the state of the PIR sensor (HIGH or LOW)

  if (pirState == HIGH) {
    Serial.println("Motion Detected!");  // Print a message when motion is detected
  } else {
    Serial.println("No Motion Detected.");  // Print a message when no motion is detected
  }

  delay(1000);  // Wait for 1 second before reading again
}
