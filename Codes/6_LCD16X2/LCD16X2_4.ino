// include the library code:
#include <LiquidCrystal.h>

int sw1 = 8;
int sw2 = 9;
int DCMotor_A =7;
int DCMotor_B =6;
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  pinMode(DCMotor_A, OUTPUT);
  pinMode(DCMotor_B, OUTPUT);
  
  // Print a message to the LCD.
  lcd.print("DCMotor Function");
}

void loop() {
 
  if(HIGH==digitalRead(sw1))
  {
  lcd.setCursor(0,0);
  lcd.print("Motor Moving");
  lcd.setCursor(0,1);
  lcd.print("Clockwies");  
  digitalWrite(DCMotor_A,HIGH);
  digitalWrite(DCMotor_B,LOW);  

  }
 
   if(HIGH==digitalRead(sw2))
  {
    lcd.setCursor(0,0);
  lcd.print("Motor Moving");
  lcd.setCursor(0,1);
  lcd.print("AntiClockwies");  
  digitalWrite(DCMotor_A,LOW);
  digitalWrite(DCMotor_B,HIGH); 
  }
}
 