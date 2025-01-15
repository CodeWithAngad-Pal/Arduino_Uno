# Arduino Flame Sensor

## Components:
- **Arduino Uno** (or any other compatible board)
- **Flame Sensor** (e.g., KY-026 or similar)
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| Flame Sensor Pin   | Arduino Pin  |
|--------------------|--------------|
| **VCC**            | **5V**       |
| **GND**            | **GND**      |
| **DO (Digital Output)** | **D2**       |

### Steps to Connect:
1. Connect the **VCC** pin of the flame sensor to **5V** on the Arduino.
2. Connect the **GND** pin of the flame sensor to **GND** on the Arduino.
3. Connect the **DO (Digital Output)** pin of the flame sensor to the **D2** pin on the Arduino.

## Arduino Code to Read Flame Sensor:

```cpp
int flameSensorPin = 2;  // Pin connected to the flame sensor's digital output
int sensorState = 0;     // Variable to store the sensor state (HIGH or LOW)

void setup() {
  pinMode(flameSensorPin, INPUT);  // Set the flame sensor pin as input
  Serial.begin(9600);              // Initialize serial communication
}

void loop() {
  sensorState = digitalRead(flameSensorPin);  // Read the sensor state

  if (sensorState == HIGH) {
    Serial.println("No flame detected.");
  } else {
    Serial.println("Flame detected!");
  }
  
  delay(1000);  // Wait 1 second before reading again
}
