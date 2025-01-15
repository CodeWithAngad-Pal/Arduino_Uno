#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9  // Reset pin for RFID
#define SS_PIN 10  // Slave Select pin for RFID

MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance

void setup() {
  Serial.begin(9600);   // Initialize serial communication
  SPI.begin();          // Start SPI communication
  mfrc522.PCD_Init();   // Initialize RFID reader
  Serial.println("Place your RFID tag near the reader...");
}

void loop() {
  if (mfrc522.PICC_IsNewCardPresent()) {  // Check if a new card is detected
    if (mfrc522.PICC_ReadCardSerial()) {  // Read the card's serial number
      Serial.print("Card UID: ");
      for (byte i = 0; i < mfrc522.uid.size; i++) {
        Serial.print(mfrc522.uid.uidByte[i], DEC);  // Print each byte of the UID
        Serial.print(" ");
      }
      Serial.println();
      mfrc522.PICC_HaltA();  // Halt the card
      mfrc522.PCD_StopCrypto1();  // Stop encryption
    }
  }
}
