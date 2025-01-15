#include <Keypad.h>

// Define the keypad pins
const byte ROW_NUM    = 4; // Four rows
const byte COLUMN_NUM = 4; // Four columns

char keys[ROW_NUM][COLUMN_NUM] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pin_rows[ROW_NUM] = {5, 4, 3, 2};    // Connect to the row pinouts of the keypad
byte pin_column[COLUMN_NUM] = {9, 8, 7, 6}; // Connect to the column pinouts of the keypad

// Create an instance of the keypad
Keypad keypad = Keypad( makeKeymap(keys), pin_rows, pin_column, ROW_NUM, COLUMN_NUM );

void setup() {
  Serial.begin(9600);  // Start serial communication
  Serial.println("Keypad Communication Started...");
}

void loop() {
  char key = keypad.getKey(); // Get the pressed key
  
  if (key) {
    Serial.print("Key Pressed: ");
    Serial.println(key); // Print the key pressed to the Serial Monitor
  }
}
