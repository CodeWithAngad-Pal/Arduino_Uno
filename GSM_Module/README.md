# SMS Module with Arduino (GSM SIM800/900)

This guide demonstrates how to use a **GSM Module** to send and receive SMS using an Arduino.

---

## Hardware Components:
- **Arduino** (Uno, Mega, or any compatible board)
- **GSM Module** (e.g., SIM800 or SIM900)
- SIM card with an active SMS plan
- Jumper wires
- Breadboard (optional)

---

## Wiring for GSM Module

| **GSM Module Pin** | **Arduino Pin**    | **Description**                   |
|---------------------|--------------------|------------------------------------|
| VCC                 | 5V or External PSU | Power supply (refer to module specs) |
| GND                 | GND               | Ground connection                 |
| TXD                 | Pin 10            | GSM Module TX (to Arduino RX)     |
| RXD                 | Pin 11            | GSM Module RX (to Arduino TX)     |

---
