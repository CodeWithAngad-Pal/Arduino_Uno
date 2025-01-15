int soundPin = A0;  // Pin connected to the sound sensor's analog output
int soundValue = 0;  // Variable to store the sound sensor value

void setup() {
  Serial.begin(9600);  // Start serial communication
}

void loop() {
  soundValue = analogRead(soundPin);  // Read the sound sensor's analog output value

  Serial.print("Sound Level: ");
  Serial.println(soundValue);  // Print the sound value to the serial monitor

  delay(1000);  // Wait for 1 second before reading again
}
