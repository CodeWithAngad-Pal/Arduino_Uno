int soundPin = 2;  // Pin connected to the sound sensor's digital output
int soundState = 0; // Variable to store the state of the sound sensor

void setup() {
  pinMode(soundPin, INPUT);   // Set the sound sensor pin as an input
  Serial.begin(9600);         // Start serial communication
}

void loop() {
  soundState = digitalRead(soundPin);  // Read the state of the sound sensor (HIGH or LOW)

  if (soundState == HIGH) {
    Serial.println("Sound Detected!");  // Print a message when sound is detected
  } else {
    Serial.println("No Sound Detected.");  // Print a message when no sound is detected
  }

  delay(1000);  // Wait for 1 second before reading again
}
