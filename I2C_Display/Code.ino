#include <Wire.h>          // Include Wire library for I2C communication
#include <LiquidCrystal_I2C.h> // Include LCD library for I2C LCD

// Create an LCD object with I2C address 0x3F (default I2C address for most displays)
LiquidCrystal_I2C lcd(0x3F, 16, 2); // 16x2 LCD

void setup() {
  lcd.begin(16, 2);          // Initialize the LCD screen with 16 columns and 2 rows
  lcd.print("Hello, World!"); // Display text on the LCD
}

void loop() {
  // You can add more code here to update or manipulate the display
}
