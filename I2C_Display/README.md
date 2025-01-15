# I2C LCD Display

## Components:
- **Arduino Uno** (or any other compatible board)
- **I2C LCD Display (16x2)**
- **Jumper Wires**
- **Breadboard** (optional)

## Circuit Connections:

| I2C LCD Pin     | Arduino Pin |
|-----------------|-------------|
| **GND**         | **GND**     |
| **VCC**         | **5V**      |
| **SDA**         | **A4**      |
| **SCL**         | **A5**      |

### Steps to Connect:
1. Connect the **GND** pin of the I2C LCD to the **GND** pin on the Arduino.
2. Connect the **VCC** pin of the I2C LCD to the **5V** pin on the Arduino.
3. Connect the **SDA** pin of the I2C LCD to **A4** on the Arduino (for most Arduino boards like Uno).
4. Connect the **SCL** pin of the I2C LCD to **A5** on the Arduino.



# -------------------------------------------------------------------------------------------------

# Functions for I2C LCD Display using LiquidCrystal_I2C

## Setup and Initialization:
- **`lcd.begin(cols, rows)`**: Initializes the LCD display. 
    - **cols**: Number of columns on the LCD (usually 16 or 20).
    - **rows**: Number of rows on the LCD (usually 2 or 4).
    ```cpp
    lcd.begin(16, 2); // 16 columns and 2 rows
    ```

- **`lcd.setBacklight()`**: Turns on the backlight of the LCD.
    ```cpp
    lcd.setBacklight(); // Turns the backlight on
    ```

- **`lcd.noBacklight()`**: Turns off the backlight of the LCD.
    ```cpp
    lcd.noBacklight(); // Turns the backlight off
    ```

## Text Display Functions:
- **`lcd.print(text)`**: Displays a string or number on the LCD. Can be used to print text, numbers, or variables.
    ```cpp
    lcd.print("Hello, World!"); // Prints the text "Hello, World!" to the LCD
    ```

- **`lcd.println(text)`**: Prints a string followed by a new line.
    ```cpp
    lcd.println("Hello, World!"); // Prints and moves to the next line
    ```

- **`lcd.setCursor(col, row)`**: Sets the cursor to the specified column and row.
    - **col**: Column number (0 to 15 for 16x2 display).
    - **row**: Row number (0 to 1 for 2-row displays).
    ```cpp
    lcd.setCursor(0, 1); // Move cursor to column 0, row 1
    ```

- **`lcd.clear()`**: Clears the display and sets the cursor to (0, 0).
    ```cpp
    lcd.clear(); // Clears the screen
    ```

- **`lcd.home()`**: Moves the cursor to the top-left corner (0,0).
    ```cpp
    lcd.home(); // Move the cursor to (0, 0)
    ```

## Cursor Control:
- **`lcd.cursor()`**: Turns on the cursor (a blinking underscore).
    ```cpp
    lcd.cursor(); // Turns on the cursor
    ```

- **`lcd.noCursor()`**: Turns off the cursor.
    ```cpp
    lcd.noCursor(); // Turns off the cursor
    ```

- **`lcd.blink()`**: Enables the blinking cursor.
    ```cpp
    lcd.blink(); // Makes the cursor blink
    ```

- **`lcd.noBlink()`**: Disables the blinking cursor.
    ```cpp
    lcd.noBlink(); // Stops the cursor from blinking
    ```

## Custom Characters:
- **`lcd.createChar(location, charmap)`**: Creates a custom character and stores it at a specific location (0-7).
    - **location**: The memory location (0-7) where the custom character is stored.
    - **charmap**: An array of 8 bytes that define the custom character.
    ```cpp
    byte smiley[8] = { B00100, B01010, B01010, B01111, B01010, B01010, B00100, B00000 };
    lcd.createChar(0, smiley); // Create a custom smiley face
    lcd.setCursor(0, 0);
    lcd.write(0); // Display the smiley face at position (0, 0)
    ```

## Display Control:
- **`lcd.noDisplay()`**: Turns off the display, making it blank.
    ```cpp
    lcd.noDisplay(); // Turns off the display
    ```

- **`lcd.display()`**: Turns on the display and restores the previous content.
    ```cpp
    lcd.display(); // Turns on the display
    ```

## Scrolling:
- **`lcd.scrollDisplayLeft()`**: Scrolls the display content one character to the left.
    ```cpp
    lcd.scrollDisplayLeft(); // Scrolls the content to the left
    ```

- **`lcd.scrollDisplayRight()`**: Scrolls the display content one character to the right.
    ```cpp
    lcd.scrollDisplayRight(); // Scrolls the content to the right
    ```

## Special Functions:
- **`lcd.autoscroll()`**: Automatically scrolls the text to the left when it reaches the end of the line.
    ```cpp
    lcd.autoscroll(); // Enables auto-scrolling
    ```

- **`lcd.noAutoscroll()`**: Disables auto-scrolling.
    ```cpp
    lcd.noAutoscroll(); // Disables auto-scrolling
    ```

- **`lcd.leftToRight()`**: Makes the text scroll from left to right (default).
    ```cpp
    lcd.leftToRight(); // Left to right scrolling
    ```

- **`lcd.rightToLeft()`**: Makes the text scroll from right to left.
    ```cpp
    lcd.rightToLeft(); // Right to left scrolling
    ```

## Cursor Positioning:
- **`lcd.moveCursor(direction)`**: Moves the cursor in a specific direction.
    - **direction**: Use `LCD_MOVE_LEFT` or `LCD_MOVE_RIGHT`.
    ```cpp
    lcd.moveCursor(LCD_MOVE_LEFT);  // Move the cursor to the left
    lcd.moveCursor(LCD_MOVE_RIGHT); // Move the cursor to the right
    ```

## Full Example Code:

```cpp
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2);  // Initialize LCD with I2C address 0x3F, 16 columns, 2 rows

void setup() {
  lcd.begin(16, 2);            // Initialize the LCD
  lcd.clear();                 // Clear the display
  lcd.setCursor(0, 0);         // Set cursor to the top-left corner
  lcd.print("Hello, World!");  // Print text to LCD
  lcd.setCursor(0, 1);         // Set cursor to second row
  lcd.print("Arduino LCD");
}

void loop() {
  // Your code here
}
