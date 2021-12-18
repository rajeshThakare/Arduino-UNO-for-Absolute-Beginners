// C++ code
//
/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the
  result to the serial monitor

  This example code is in the public domain.
*/

int LED_A=6;
int LED_B=7;
int LED_DP=8;
int LED_C=9;
int LED_D=10;
int LED_E=11;
int LED_G=12;
int LED_F=13;

void setup()
{
 pinMode(LED_A,  OUTPUT);
 pinMode(LED_B,  OUTPUT);
 pinMode(LED_DP,  OUTPUT);
 pinMode(LED_C,  OUTPUT);
 pinMode(LED_D,  OUTPUT);
 pinMode(LED_E,  OUTPUT);
 pinMode(LED_G, OUTPUT);
 pinMode(LED_F,OUTPUT);
 
}

void loop()
{
   digitalWrite(LED_A,HIGH);   //0
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,HIGH);
   digitalWrite(LED_G,LOW);
   digitalWrite(LED_F,HIGH);  
   delay(1000);
   digitalWrite(LED_A,LOW);  ///1
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,LOW);
   digitalWrite(LED_E,LOW);
   digitalWrite(LED_G,LOW);
   digitalWrite(LED_F,LOW);
   delay(1000);
   digitalWrite(LED_A,HIGH);  ///2
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,LOW);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,HIGH);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,LOW);
   delay(1000);
   digitalWrite(LED_A,HIGH);  //3
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,LOW);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,LOW);
   delay(1000);
   digitalWrite(LED_A,LOW); //4
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,LOW);
   digitalWrite(LED_E,LOW);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,HIGH);
   delay(1000);
   digitalWrite(LED_A,HIGH);  //5
   digitalWrite(LED_B,LOW);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,LOW);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,HIGH);
   delay(1000);
   digitalWrite(LED_A,HIGH);  //6
   digitalWrite(LED_B,LOW);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,HIGH);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,HIGH);
   delay(1000);
   digitalWrite(LED_A,HIGH);  //7
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,LOW);
   digitalWrite(LED_E,LOW);
   digitalWrite(LED_G,LOW);
   digitalWrite(LED_F,LOW);
   delay(1000);
   digitalWrite(LED_A,HIGH);  //8
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,HIGH);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,HIGH);
   delay(1000);
   digitalWrite(LED_A,HIGH);  //9
   digitalWrite(LED_B,HIGH);
   digitalWrite(LED_DP,LOW);
   digitalWrite(LED_C,HIGH);
   digitalWrite(LED_D,HIGH);
   digitalWrite(LED_E,LOW);
   digitalWrite(LED_G,HIGH);
   digitalWrite(LED_F,HIGH);
   delay(1000);
}