#define VRX_PIN A0 // Analog pin for X-axis
#define VRY_PIN A1 // Analog pin for Y-axis
#define SW_PIN 2   // Digital pin for the joystick button

void setup() {
  pinMode(SW_PIN, INPUT_PULLUP); // Set joystick button as input with pull-up
  Serial.begin(9600);           // Initialize serial communication
}

void loop() {
  int xValue = analogRead(VRX_PIN); // Read X-axis value
  int yValue = analogRead(VRY_PIN); // Read Y-axis value
  int buttonState = digitalRead(SW_PIN); // Read button state

  // Print joystick data
  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | Button: ");
  Serial.println(buttonState == LOW ? "Pressed" : "Released");

  delay(100); // Wait for 100ms
}
