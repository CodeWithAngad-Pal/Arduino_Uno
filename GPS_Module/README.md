# GPS Module with Arduino (NEO-6M)

This guide explains how to use a **GPS Module** to read location data (latitude, longitude) with Arduino.

---

## Hardware Components:
- **Arduino** (Uno, Mega, or any compatible board)
- **GPS Module** (e.g., NEO-6M)
- Jumper wires
- Breadboard (optional)

---

## Wiring for GPS Module

| **GPS Module Pin** | **Arduino Pin**    | **Description**                   |
|---------------------|--------------------|------------------------------------|
| VCC                 | 5V                | Power supply                      |
| GND                 | GND               | Ground connection                 |
| TXD                 | Pin 4             | GPS Module TX (to Arduino RX)     |
| RXD                 | Pin 3             | GPS Module RX (to Arduino TX)     |

---
---
---

# GPS Module Functions with Arduino (NEO-6M)

This guide provides an overview of all the primary functions available when using a **GPS Module** with Arduino. It includes functions for retrieving GPS data such as latitude, longitude, altitude, speed, and more.

---

## Hardware Requirements:
- **Arduino** (e.g., Uno, Mega, Nano)
- **GPS Module** (e.g., NEO-6M)
- Jumper wires
- Breadboard (optional)

---

## Wiring for GPS Module

| **GPS Module Pin** | **Arduino Pin** | **Description**                   |
|---------------------|-----------------|------------------------------------|
| VCC                 | 5V             | Power supply                      |
| GND                 | GND            | Ground connection                 |
| TXD                 | Pin 4          | GPS Module TX (to Arduino RX)     |
| RXD                 | Pin 3          | GPS Module RX (to Arduino TX)     |

---

## Required Libraries:
Install the **TinyGPS++** library:
1. Open Arduino IDE.
2. Go to **Tools > Manage Libraries**.
3. Search for **TinyGPS++** and install it.

---

## Code Example with Functions

```cpp
#include <TinyGPS++.h>
#include <SoftwareSerial.h>

TinyGPSPlus gps;
SoftwareSerial gpsSerial(4, 3); // RX, TX

void setup() {
  Serial.begin(9600);      // For debugging
  gpsSerial.begin(9600);   // For GPS communication
  Serial.println("GPS Module Initialized...");
}

void loop() {
  while (gpsSerial.available() > 0) {
    if (gps.encode(gpsSerial.read())) { // Parse GPS data
      if (gps.location.isUpdated()) {
        displayGPSInfo(); // Display GPS data
      }
    }
  }
}

// Function to display all GPS data
void displayGPSInfo() {
  Serial.print("Latitude: ");
  Serial.println(gps.location.lat(), 6); // Latitude (6 decimal places)

  Serial.print("Longitude: ");
  Serial.println(gps.location.lng(), 6); // Longitude (6 decimal places)

  Serial.print("Altitude: ");
  Serial.print(gps.altitude.meters());
  Serial.println(" meters");

  Serial.print("Speed: ");
  Serial.print(gps.speed.kmph());
  Serial.println(" km/h");

  Serial.print("Satellites: ");
  Serial.println(gps.satellites.value()); // Number of satellites in view

  Serial.print("Date: ");
  Serial.print(gps.date.day());
  Serial.print("/");
  Serial.print(gps.date.month());
  Serial.print("/");
  Serial.println(gps.date.year());

  Serial.print("Time: ");
  Serial.print(gps.time.hour());
  Serial.print(":");
  Serial.print(gps.time.minute());
  Serial.print(":");
  Serial.println(gps.time.second());

  Serial.println("----------------------");
  delay(1000);
}
