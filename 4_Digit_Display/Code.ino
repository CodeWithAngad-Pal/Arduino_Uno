#include <TM1637Display.h>

// Pin configuration
#define CLK 2  // Clock Pin
#define DIO 3  // Data Pin

TM1637Display display(CLK, DIO);  // Create display object

void setup() {
  display.setBrightness(0x0f);    // Set brightness level (0x0f = max)
}

void loop() {
  for (int i = 0; i <= 9999; i++) {
    display.showNumberDec(i, false); // Show numbers on the display
    delay(1000);  // Update every second
  }
}
