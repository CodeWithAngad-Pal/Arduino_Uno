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
| **PIR Sensor (OUT - Digital Output)** | D2       | Digital Output (OUT)    |

### Steps to Connect:
1. **PIR Sensor VCC to Arduino 5V**: Connect the **VCC** pin of the PIR sensor to the **5V** pin on the Arduino.
2. **PIR Sensor GND to Arduino GND**: Connect the **GND** pin of the PIR sensor to a **GND** pin on the Arduino.
3. **PIR Sensor OUT to Arduino Pin D2**: Connect the **OUT** pin of the PIR sensor to **Digital Pin 2** on the Arduino.
