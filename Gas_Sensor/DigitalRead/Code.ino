int gasPin = 2;  // Pin connected to the gas sensor digital output
int gasState = 0; // Variable to store the state of the gas sensor

void setup() {
  pinMode(gasPin, INPUT);  // Set the gas sensor pin as an input
  Serial.begin(9600);  // Initialize serial communication
}

void loop() {
  gasState = digitalRead(gasPin);  // Read the gas sensor state (HIGH or LOW)
  
  if (gasState == HIGH) {
    Serial.println("Gas detected!");
  } else {
    Serial.println("No gas detected.");
  }

  delay(1000);  // Wait for 1 second before reading again
}
