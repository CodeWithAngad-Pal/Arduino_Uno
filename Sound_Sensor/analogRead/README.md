# Sound Sensor Circuit for Arduino

## Components:
- **Arduino Uno** (or any other compatible board)
- **Sound Sensor Module**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Component                     | Arduino Pin     | Sound Sensor Pin        |
|-------------------------------|-----------------|-------------------------|
| **Sound Sensor (VCC)**         | 5V              | VCC                     |
| **Sound Sensor (GND)**         | GND             | GND                     |
| **Sound Sensor (AO - Analog Output)** | A0       | Analog Output (AO)      |

### Steps to Connect:
1. **Sound Sensor VCC to Arduino 5V**: Connect the **VCC** pin of the sound sensor to the **5V** pin on the Arduino.
2. **Sound Sensor GND to Arduino GND**: Connect the **GND** pin of the sound sensor to a **GND** pin on the Arduino.
3. **Sound Sensor Analog Output to Arduino Pin A0**: Connect the **Analog Output (AO)** pin of the sound sensor to **Analog Pin A0** on the Arduino.
