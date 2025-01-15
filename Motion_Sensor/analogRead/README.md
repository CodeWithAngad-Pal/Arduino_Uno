# PIR (Passive Infrared) Motion Sensor Circuit for Arduino 

## Components:
- **Arduino Uno** (or any other compatible board)
- **PIR Motion Sensor**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Component                     | Arduino Pin     | PIR Sensor Pin          |
|-------------------------------|-----------------|-------------------------|
| **PIR Sensor (VCC)**           | 5V              | VCC                     |
| **PIR Sensor (GND)**           | GND             | GND                     |
| **PIR Sensor (AO - Analog Output)** | A0           | Analog Output (AO)      |

### Steps to Connect:
1. **PIR Sensor VCC to Arduino 5V**: Connect the **VCC** pin of the PIR sensor to the **5V** pin on the Arduino.
2. **PIR Sensor GND to Arduino GND**: Connect the **GND** pin of the PIR sensor to a **GND** pin on the Arduino.
3. **PIR Sensor Analog Output to Arduino Pin A0**: Connect the **Analog Output (AO)** pin of the PIR sensor to **Analog Pin A0** on the Arduino.
