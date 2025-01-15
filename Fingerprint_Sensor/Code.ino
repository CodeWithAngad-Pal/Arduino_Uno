#include <Adafruit_Fingerprint.h>
#include <SoftwareSerial.h>

// Define pin for RX and TX
SoftwareSerial mySerial(2, 3); // RX, TX
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  // Initialize fingerprint sensor
  if (finger.begin()) {
    Serial.println("Fingerprint sensor found!");
  } else {
    Serial.println("Fingerprint sensor not found!");
    while (1);
  }
  
  Serial.println("Waiting for finger...");
}

void loop() {
  // Check if a fingerprint is detected
  int result = finger.getImage();
  
  if (result == FINGERPRINT_OK) {
    Serial.println("Fingerprint found!");

    // Convert the image to a template
    result = finger.image2Tz();
    if (result == FINGERPRINT_OK) {
      Serial.println("Image converted to template!");

      // Search for the finger in the database
      result = finger.fingerSearch();
      if (result >= 0) {
        Serial.print("Finger ID: ");
        Serial.println(result);
        Serial.println("Fingerprint recognized!");
      } else {
        Serial.println("Fingerprint not recognized.");
      }
    } else {
      Serial.println("Failed to convert image to template.");
    }
  } else {
    Serial.println("No finger detected.");
  }
  delay(1000);  // Wait a second before next scan
}
