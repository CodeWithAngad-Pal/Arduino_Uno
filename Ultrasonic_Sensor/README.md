# Ultrasonic Sensor with Arduino

This guide demonstrates how to use an ultrasonic sensor (e.g., **HC-SR04**) with an Arduino to measure distances.

## Hardware Components:
- **Arduino** (Uno, Mega, or any compatible board)
- **Ultrasonic Sensor** (e.g., HC-SR04)
- Jumper wires
- **Breadboard** (optional)

# Wiring for HC-SR04 Ultrasonic Sensor

| **HC-SR04 Pin** | **Arduino Pin**          | **Description**                       |
|-----------------|--------------------------|---------------------------------------|
| **VCC**             | 5V                       | Power supply for the ultrasonic sensor|
| **GND**             | GND                      | Ground connection                    |
| **TRIG**          | Pin 9 (or any digital pin)| Trigger pin to send pulse            |
| **ECHO**            | Pin 10 (or any digital pin)| Echo pin to receive reflected pulse  |
