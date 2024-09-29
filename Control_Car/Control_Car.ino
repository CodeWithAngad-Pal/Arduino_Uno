#include <SoftwareSerial.h>

SoftwareSerial BTSerial(6, 7);  // RX, TX pins for Bluetooth communication

// Motor pins
int motor1Pin1 = 2; // Motor 1 forward
int motor1Pin2 = 3; // Motor 1 backward
int motor2Pin1 = 4; // Motor 2 forward
int motor2Pin2 = 5; // Motor 2 backward
int enable1 = 9;    // Motor 1 speed control (PWM)
int enable2 = 10;   // Motor 2 speed control (PWM)

char command; // To store received Bluetooth command

void setup() {
  // Set motor pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enable1, OUTPUT);
  pinMode(enable2, OUTPUT);

  // Set initial speed for motors
  analogWrite(enable1, 255); // Full speed for Motor 1
  analogWrite(enable2, 255); // Full speed for Motor 2

  BTSerial.begin(9600);       // Start Bluetooth serial at 9600 baud rate
  Serial.begin(9600);         // Start Serial monitor for debugging
  Serial.println("Bluetooth Car Ready");
}

void loop() {
  // Check if data is available from Bluetooth
  if (BTSerial.available()) {        
    command = BTSerial.read();  // Read the incoming data from Bluetooth
    Serial.print("Received Command: "); 
    Serial.println(command);  // Debugging statement to print received command
    
    // Execute commands based on valid input
    if (command == '1' || command == '2' || command == '3' || command == '4' || command == '0') {
      processCommand(command);
    } else {
      Serial.println("Invalid command, ignoring...");
    }
  }
}

// Function to process motor commands
void processCommand(char cmd) {
  switch (cmd) {
    case '1':
      Serial.println("Moving Forward"); // Debugging statement
      forward(); // Move forward
      break;

    case '2':
      Serial.println("Moving Backward"); // Debugging statement
      backward(); // Move backward
      break;

    case '3':
      Serial.println("Turning Left"); // Debugging statement
      left(); // Turn left
      break;

    case '4':
      Serial.println("Turning Right"); // Debugging statement
      right(); // Turn right
      break;

    case '0':
      Serial.println("Stopping Motors"); // Debugging statement
      stopMotors(); // Stop motors
      break;
  }
}

// Functions to control motor movement
void forward() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void backward() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

void left() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
}

void right() {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
}

// Function to stop the motors
void stopMotors() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
  Serial.println("Motors Stopped");
}
