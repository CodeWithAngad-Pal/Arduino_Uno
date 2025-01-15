int irPin = 2;   // Pin connected to the IR sensor's output
int irState = 0;  // Variable to store the state of the IR sensor

void setup() {
  pinMode(irPin, INPUT);  // Set the IR sensor pin as an input
  Serial.begin(9600);     // Start serial communication
}

void loop() {
  irState = digitalRead(irPin);  // Read the state of the IR sensor (HIGH or LOW)

  if (irState == HIGH) {
    Serial.println("IR Signal Detected!");  // Print a message when IR signal is detected
  } else {
    Serial.println("No IR Signal Detected.");  // Print a message when no IR signal is detected
  }

  delay(1000);  // Wait for 1 second before reading again
}
