#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Wire.begin(); // Initialize I2C
  lcd.init(); // Initialize LCD
  lcd.backlight(); // Turn on backlight
  lcd.setCursor(0, 0); // Set cursor to top-left corner
  lcd.print("Welcome to Soil Moisture Sensor "); // Print "Hello" on LCD
  delay(1000); // Wait 1 second
}

void loop() {
  // Nothing to do here, the LCD will display "Hello" continuously
  // lcd.setCursor(0, 0); // Set cursor to top-left corner
  // lcd.print("Hello"); // Print "Hello" on LCD
  // delay(1000); // Wait 1 second
}