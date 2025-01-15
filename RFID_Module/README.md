# Arduino RFID (Radio Frequency Identification)

## Components:
- **Arduino Uno** (or any other compatible board)
- **RFID Reader** (e.g., RC522 module)
- **RFID Tags** (or Cards)
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| RFID Module Pin     | Arduino Pin   |
|---------------------|---------------|
| **SDA (SS)**         | **D10**       |
| **SCK (Serial Clock)** | **D13**     |
| **MOSI (Master Out Slave In)** | **D11** |
| **MISO (Master In Slave Out)** | **D12** |
| **IRQ**              | **Not Connected** |
| **GND**              | **GND**       |
| **RST (Reset)**      | **D9**        |
| **VCC**              | **5V**        |

### Steps to Connect:
1. Connect the **SDA (SS)** pin of the RFID module to the **D10** pin of the Arduino.
2. Connect the **SCK** pin to the **D13** pin.
3. Connect the **MOSI** pin to the **D11** pin.
4. Connect the **MISO** pin to the **D12** pin.
5. Connect the **RST** pin to **D9** pin on the Arduino.
6. Connect the **GND** pin to **GND** on the Arduino.
7. Connect the **VCC** pin to the **5V** pin on the Arduino.

### Required Libraries:
1. **MFRC522** library (Install from the Library Manager in Arduino IDE)
















# Matching the Card 

```cpp
#include <SPI.h>
#include <MFRC522.h>

#define RST_PIN 9   // Reset pin for the RFID module
#define SS_PIN 10   // Slave Select pin for the RFID module

MFRC522 rfid(SS_PIN, RST_PIN);  // Create MFRC522 instance

// Define UIDs (Unique IDs) of the RFID cards
byte card1[4] = {0x12, 0x34, 0x56, 0x78};  // Replace with actual UID of Card 1
byte card2[4] = {0x87, 0x65, 0x43, 0x21};  // Replace with actual UID of Card 2

void setup() {
  Serial.begin(9600);  // Initialize serial communication
  SPI.begin();         // Initialize SPI bus
  rfid.PCD_Init();     // Initialize RFID module
  Serial.println("Place your card on the RFID reader...");
}

void loop() {
  // Check if an RFID card is present
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    return;  // Exit if no card is present
  }

  // Check which card was scanned and print the corresponding message
  if (isCardMatched(card1)) {
    Serial.println("Card 1 matched. Password: PASSWORD123");
  } else if (isCardMatched(card2)) {
    Serial.println("Card 2 matched. Password: SECURE456");
  } else {
    Serial.println("Unknown card!");  // If the card doesn't match any predefined ones
  }

  // Halt communication with the card
  rfid.PICC_HaltA();
}

// Function to check if the scanned card matches a predefined UID
bool isCardMatched(byte cardUID[4]) {
  for (byte i = 0; i < 4; i++) {
    if (rfid.uid.uidByte[i] != cardUID[i]) {
      return false;  // If any byte doesn't match, return false
    }
  }
  return true;  // All bytes matched
}
