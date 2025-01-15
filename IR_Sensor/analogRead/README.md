# IR (Infrared) Sensor Circuit for Arduino 

## Components:
- **Arduino Uno** (or any other compatible board)
- **IR Sensor Module**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Component                     | Arduino Pin     | IR Sensor Pin           |
|-------------------------------|-----------------|-------------------------|
| **IR Sensor (VCC)**            | 5V              | VCC                     |
| **IR Sensor (GND)**            | GND             | GND                     |
| **IR Sensor (AO - Analog Output)** | A0           | Analog Output (AO)      |

### Steps to Connect:
1. **IR Sensor VCC to Arduino 5V**: Connect the **VCC** pin of the IR sensor to the **5V** pin on the Arduino.
2. **IR Sensor GND to Arduino GND**: Connect the **GND** pin of the IR sensor to a **GND** pin on the Arduino.
3. **IR Sensor Analog Output to Arduino Pin A0**: Connect the **Analog Output (AO)** pin of the IR sensor to **Analog Pin A0** on the Arduino.
