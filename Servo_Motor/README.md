# Servo Motor Circuit for Arduino

## Components:
- **Arduino Uno** (or any other compatible board)
- **Servo Motor**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Component               | Arduino Pin      | Servo Motor Pin    |
|-------------------------|------------------|--------------------|
| **Servo Motor (VCC)**   | 5V               | VCC                |
| **Servo Motor (GND)**   | GND              | GND                |
| **Servo Motor (Signal)**| Pin 9            | Signal Pin (usually white or yellow) |

## Steps to Connect:
1. **Servo Motor VCC to Arduino 5V**: Connect the **VCC** pin of the servo motor to the **5V** pin on the Arduino.
2. **Servo Motor GND to Arduino GND**: Connect the **GND** pin of the servo motor to a **GND** pin on the Arduino.
3. **Servo Motor Signal to Arduino Pin 9**: Connect the **Signal Pin** of the servo motor to **Pin 9** on the Arduino.

## Visualizing the Circuit:
- **VCC (5V)**: Provides power to the servo motor.
- **GND**: Ground connection for the motor.
- **Signal Pin**: Receives control signals to rotate the motor.

This is a basic setup for controlling a servo motor with Arduino.
