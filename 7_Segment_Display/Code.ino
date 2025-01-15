// Define pins connected to the 7-segment display
int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int dp = 9; // Optional, for decimal point

// Define the 7-segment number patterns (Common Cathode)
int numberPatterns[10][7] = {
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 1, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 1, 0, 1, 1}   // 9
};

void setup() {
  // Set all the pins as OUTPUT
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(dp, OUTPUT);  // Optional for decimal point
}

void loop() {
  // Display numbers from 0 to 9
  for (int i = 0; i < 10; i++) {
    displayNumber(i);  // Display number on 7-segment display
    delay(1000);  // Wait for 1 second
  }
}

// Function to display a number on the 7-segment display
void displayNumber(int num) {
  // Set the segments to HIGH or LOW depending on the number pattern
  digitalWrite(a, numberPatterns[num][0]);
  digitalWrite(b, numberPatterns[num][1]);
  digitalWrite(c, numberPatterns[num][2]);
  digitalWrite(d, numberPatterns[num][3]);
  digitalWrite(e, numberPatterns[num][4]);
  digitalWrite(f, numberPatterns[num][5]);
  digitalWrite(g, numberPatterns[num][6]);
  digitalWrite(dp, LOW);  // Turn off the decimal point
}
