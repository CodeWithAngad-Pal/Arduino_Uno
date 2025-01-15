# Bluetooth Module Circuit for Arduino (HC-05/HC-06)

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
| **Bluetooth TX (Transmitter)** | D0 (RX)         | TX                       |
| **Bluetooth RX (Receiver)**    | D1 (TX)         | RX                       |

### Steps to Connect:
1. **Bluetooth VCC to Arduino 5V**: Connect the **VCC** pin of the Bluetooth module to the **5V** pin on the Arduino.
2. **Bluetooth GND to Arduino GND**: Connect the **GND** pin of the Bluetooth module to the **GND** pin on the Arduino.
3. **Bluetooth TX to Arduino Pin D0 (RX)**: Connect the **TX** pin of the Bluetooth module to the **RX** pin (D0) on the Arduino.
4. **Bluetooth RX to Arduino Pin D1 (TX)**: Connect the **RX** pin of the Bluetooth module to the **TX** pin (D1) on the Arduino.

