// include the library code:
#include <LiquidCrystal.h>
#include <Keypad.h>
const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {19,18,17,16}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {15,14,7,6}; //connect to the column pinouts of the keypad

// initialize the library with the numbers of the interface pins
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("O HelloPressKey..");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  char key = keypad.getKey();
  
  if (key){
    lcd.print(key);
  }
}

