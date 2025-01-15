# Gas Sensor Circuit 

## Components:
- **Arduino Uno** (or any other compatible board)
- **Gas Sensor (e.g., MQ-2 or MQ-7)**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Component                     | Arduino Pin     | Gas Sensor Pin          |
|-------------------------------|-----------------|-------------------------|
| **Gas Sensor (VCC)**           | 5V              | VCC                     |
| **Gas Sensor (GND)**           | GND             | GND                     |
| **Gas Sensor (Analog Output)** | A0              | Analog Output (AO)      |

## Steps to Connect:
1. **Gas Sensor VCC to Arduino 5V**: Connect the **VCC** pin of the gas sensor to the **5V** pin on the Arduino.
2. **Gas Sensor GND to Arduino GND**: Connect the **GND** pin of the gas sensor to a **GND** pin on the Arduino.
3. **Gas Sensor Analog Output to Arduino Pin A0**: Connect the **Analog Output (AO)** pin of the gas sensor to **Analog Pin A0** on the Arduino.
