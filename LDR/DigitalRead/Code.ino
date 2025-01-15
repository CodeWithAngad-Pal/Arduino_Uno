int ldrPin = 2;   // Pin connected to the LDR
int ldrState = 0;  // Variable to store the state of the LDR

void setup() {
  pinMode(ldrPin, INPUT);  // Set the LDR pin as an input
  Serial.begin(9600);      // Start the serial communication
}

void loop() {
  ldrState = digitalRead(ldrPin);  // Read the state of the LDR (HIGH or LOW)
  
  if (ldrState == HIGH) {
    Serial.println("Light Detected!");
  } else {
    Serial.println("No Light Detected.");
  }

  delay(1000);  // Wait for 1 second before reading again
}
