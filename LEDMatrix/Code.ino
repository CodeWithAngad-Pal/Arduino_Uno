#include <LedControl.h>

#define DATA_IN   2   // Pin connected to the DIN pin of MAX7219
#define CLK        4   // Pin connected to the CLK pin of MAX7219
#define LOAD       3   // Pin connected to the LOAD pin of MAX7219
#define MAX_DEVICES 1 // Number of MAX7219 chips connected

LedControl lc = LedControl(DATA_IN, CLK, LOAD, MAX_DEVICES);

void setup() {
  for (int i = 0; i < MAX_DEVICES; i++) {
    lc.shutdown(i, false);    // Wake up the LED matrix
    lc.setIntensity(i, 8);     // Set brightness level (0-15)
    lc.clearDisplay(i);        // Clear the matrix
  }
}

void loop() {
  // Display a simple pattern (a horizontal line)
  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, B11111111);  // Set entire row to be ON
    delay(500);
    lc.setRow(0, row, B00000000);  // Turn off the row
  }

  delay(1000);
}
