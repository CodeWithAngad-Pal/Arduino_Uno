#define TOUCH_PIN 2 // Pin connected to the OUT pin of the touch sensor

void setup() {
  pinMode(TOUCH_PIN, INPUT); // Set the touch pin as input
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int touchState = digitalRead(TOUCH_PIN); // Read the state of the touch sensor

  if (touchState == HIGH) {
    Serial.println("Touch detected!");
  } else {
    Serial.println("No touch detected.");
  }

  delay(500); // Wait for 500 milliseconds
}
