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
