int motorPin1 = 3;  // IN1 on L298N
int motorPin2 = 4;  // IN2 on L298N
int motorPin3 = 5;  // IN3 on L298N
int motorPin4 = 6;  // IN4 on L298N

void setup() {
  pinMode(motorPin1, OUTPUT);  // Set motor control pins as output
  pinMode(motorPin2, OUTPUT);  
  pinMode(motorPin3, OUTPUT);  
  pinMode(motorPin4, OUTPUT);  
}

void loop() {
  // Forward Direction
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  delay(2000);  // Run for 2 seconds

  // Reverse Direction
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  delay(2000);  // Run for 2 seconds
  
  // Stop Motors
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(1000);  // Stop for 1 second
}
