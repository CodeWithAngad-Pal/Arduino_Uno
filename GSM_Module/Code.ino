#include <SoftwareSerial.h>

SoftwareSerial gsm(10, 11); // RX, TX

void setup() {
  Serial.begin(9600); // For debugging
  gsm.begin(9600);    // For GSM module communication
  Serial.println("Initializing GSM Module...");

  delay(1000); // Wait for the GSM module to initialize

  gsm.println("AT"); // Test communication with GSM
  delay(100);
  gsm.println("AT+CMGF=1"); // Set SMS mode to text
  delay(100);
}

void loop() {
  // Replace the number below with the recipient's phone number
  String recipientNumber = "+1234567890";
  String message = "Hello, this is a test SMS from Arduino.";

  // Send SMS
  gsm.print("AT+CMGS=\"");
  gsm.print(recipientNumber);
  gsm.println("\"");
  delay(1000); // Wait for the module to process

  gsm.print(message); // Send the message
  delay(100);
  gsm.write(26); // Send Ctrl+Z to indicate end of message
  delay(5000); // Wait for SMS to send

  Serial.println("SMS Sent!");
  delay(10000); // Wait before sending the next message
}
