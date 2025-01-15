
# Arduino Motor Driver (L298N)

## Components:
- **Arduino Uno** (or any other compatible board)
- **L298N Motor Driver Module**
- **DC Motors** (or other motors like stepper motors)
- **Jumper Wires**
- **External Power Supply** (for motors, if needed)
- **Breadboard** (optional)

## Circuit Connections:

| L298N Pin          | Arduino Pin  |
|--------------------|--------------|
| **IN1**            | **D3**       |
| **IN2**            | **D4**       |
| **IN3**            | **D5**       |
| **IN4**            | **D6**       |
| **ENA (Enable A)** | **5V**       |
| **ENB (Enable B)** | **5V**       |
| **OUT1**           | **Motor 1 (A)**|
| **OUT2**           | **Motor 1 (B)**|
| **OUT3**           | **Motor 2 (A)**|
| **OUT4**           | **Motor 2 (B)**|
| **12V (VCC)**      | **External Power Supply** (motor power) |
| **GND**            | **GND**      |

### Steps to Connect:
1. Connect **IN1** to **D3**, **IN2** to **D4**, **IN3** to **D5**, and **IN4** to **D6** on the Arduino to control the motor driver.
2. Connect the **ENA** and **ENB** pins of the L298N to **5V** to enable both motors.
3. Connect **OUT1** and **OUT2** to the terminals of **Motor 1**, and **OUT3** and **OUT4** to the terminals of **Motor 2**.
4. Connect the **12V (VCC)** pin of the L298N to an **external power supply** to power the motors. Connect the **GND** of the L298N to the Arduino's **GND**.

