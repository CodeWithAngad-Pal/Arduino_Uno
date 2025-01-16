# ESP-01 Wi-Fi Module with Arduino

The **ESP-01** Wi-Fi module is a powerful and small module based on the ESP8266 chip, which allows Arduino to connect to a Wi-Fi network. This setup communicates through the TX and RX pins for data exchange.

---

## Hardware Components:
- **ESP-01 Wi-Fi Module**
- **Arduino** (Uno, Mega, or Nano)
- **Voltage Regulator** (since ESP-01 works at 3.3V)
- Breadboard
- Jumper wires

---

## ESP-01 Pinout:

| **Pin**   | **Description**                |
|-----------|--------------------------------|
| VCC       | Power supply (3.3V)            |
| GND       | Ground                         |
| TX        | Transmit (UART data to Arduino)|
| RX        | Receive (UART data from Arduino)|
| CH_PD     | Chip Power-Down (connect to 3.3V for activation)|
| GPIO0     | General-purpose I/O 0          |
| GPIO2     | General-purpose I/O 2          |
| RST       | Reset                          |

---

## Wiring ESP-01 to Arduino via TX/RX:

| **ESP-01 Pin** | **Arduino Pin** | **Notes**                                        |
|-----------------|-----------------|--------------------------------------------------|
| VCC             | 3.3V           | Use a voltage regulator for stable power supply  |
| GND             | GND            | Common ground                                   |
| TX              | Pin 0 (RX)      | Arduino RX, use a voltage divider to lower 5V to 3.3V |
| RX              | Pin 1 (TX)      | Arduino TX                                       |
| CH_PD           | 3.3V           | Must be connected to 3.3V for operation          |
| GPIO0           | -               | Leave unconnected or connect to HIGH for normal mode |
| GPIO2           | -               | Leave unconnected                                |
| RST             | -               | Leave unconnected unless reset required          |

---

## Setting Up ESP-01 in Normal Mode:
1. **GPIO0**: Set HIGH for normal operation.
2. **CH_PD**: Must be connected to **3.3V** to activate the module.
3. Use a **3.3V regulated power supply**. **Do not power ESP-01 directly from Arduino's 3.3V pin** (since it cannot supply enough current).

---

## AT Commands for Communication:

The **ESP-01** module responds to **AT commands**. Here are some common commands:

| **Command**                  | **Description**                          |
|------------------------------|------------------------------------------|
| `AT`                         | Test module connection (response: `OK`) |
| `AT+RST`                     | Reset the module                        |
| `AT+CWLAP`                   | List available Wi-Fi networks           |
| `AT+CWJAP="SSID","PASSWORD"` | Connect to a Wi-Fi network              |
| `AT+CIFSR`                   | Get the module's IP address             |
| `AT+CIPSTART="TCP","IP",PORT`| Start a TCP connection                  |
| `AT+CIPSEND=length`          | Send data to the server                 |
| `AT+CIPCLOSE`                | Close the connection                    |

---
