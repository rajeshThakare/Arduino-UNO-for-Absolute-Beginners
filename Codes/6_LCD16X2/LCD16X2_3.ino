// include the library code:
#include <LiquidCrystal.h>

int sw1 = 8;
int sw2 = 9;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);

  lcd.print("hello, world!");

}

void loop() {
 
  if(HIGH==digitalRead(sw1))
  {
 for (int pCoun = 0; pCoun < 13; pCoun++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(100);
  }

  }
 
   if(HIGH==digitalRead(sw2))
  {
   for (int pCoun = 0; pCoun < 13; pCoun++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(100);
  }
  }
}
