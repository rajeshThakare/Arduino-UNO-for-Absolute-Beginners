// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
   // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int pCoun = 0; pCoun < 13; pCoun++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(100);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int pCoun = 0; pCoun < 29; pCoun++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(100);
  }
  // delay at the end of the full loop:
  delay(1000);
 
}
 