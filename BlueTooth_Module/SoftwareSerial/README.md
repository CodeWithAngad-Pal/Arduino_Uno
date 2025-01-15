# Bluetooth Communication with Arduino Using SoftwareSerial (HC-05/HC-06)

## Components:
- **Arduino Uno** (or any other compatible board)
- **Bluetooth Module (HC-05/HC-06)**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Component                     | Arduino Pin     | Bluetooth Module Pin     |
|-------------------------------|-----------------|--------------------------|
| **Bluetooth VCC**              | 5V              | VCC                      |
| **Bluetooth GND**              | GND             | GND                      |
| **Bluetooth TX (Transmitter)** | D7 (TX)         | RX                       |
| **Bluetooth RX (Receiver)**    | D6 (RX)         | TX                       |

### Steps to Connect:
1. **Bluetooth VCC to Arduino 5V**: Connect the **VCC** pin of the Bluetooth module to the **5V** pin on the Arduino.
2. **Bluetooth GND to Arduino GND**: Connect the **GND** pin of the Bluetooth module to the **GND** pin on the Arduino.
3. **Bluetooth TX to Arduino Pin D7 (TX)**: Connect the **TX** pin of the Bluetooth module to **Arduino Pin D7 (RX)**.
4. **Bluetooth RX to Arduino Pin D6 (RX)**: Connect the **RX** pin of the Bluetooth module to **Arduino Pin D6 (TX)**.
