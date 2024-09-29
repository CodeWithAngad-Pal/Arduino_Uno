#include <SoftwareSerial.h>

const int ledPin = 13;      // Pin for the LED
SoftwareSerial BTSerial(10, 11);  // RX, TX pins for Bluetooth communication

char incomingData;  // Variable to store incoming data

void setup() {
  pinMode(ledPin, OUTPUT);    // Set the LED pin as an output
  BTSerial.begin(9600);       // Start Bluetooth serial at 9600 baud rate
  Serial.begin(9600);         // Start communication with Serial Monitor (optional)
}

void loop() {
  if (BTSerial.available()) {        // Check if data is available from Bluetooth
    incomingData = BTSerial.read();  // Read the incoming data from Bluetooth
    
    if (incomingData == '1') {       // If '1' is received, turn on the LED
      digitalWrite(ledPin, HIGH);
      BTSerial.println("LED ON");    // Send feedback to Bluetooth terminal
    } 
    else if (incomingData == '2') {  // If '2' is received, turn off the LED
      digitalWrite(ledPin, LOW);
      BTSerial.println("LED OFF");   // Send feedback to Bluetooth terminal
    }
  }
}
