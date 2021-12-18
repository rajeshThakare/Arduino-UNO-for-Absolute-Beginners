int DCMotor1_EN = 13;
int DCMotor1_A  = 12;
int DCMotor1_B  = 11;

int DCMotor2_EN = 10;
int DCMotor2_A  = 9;
int DCMotor2_B  = 8;

int sw1 = 1;
int sw2 = 2;
int sw3 = 3;
int sw4 = 4;
int Rindicator = 5;
int Lindicator = 6;


void setup ()
{
  
 pinMode(Rindicator, OUTPUT);
 pinMode(Lindicator, OUTPUT);

 pinMode(DCMotor1_EN ,OUTPUT);
 pinMode(DCMotor1_A  ,OUTPUT);
 pinMode(DCMotor1_B  ,OUTPUT);
 
 pinMode(DCMotor2_EN ,OUTPUT);
 pinMode(DCMotor2_A  ,OUTPUT);
 pinMode(DCMotor2_B  ,OUTPUT);
  
 pinMode(sw1, INPUT);
 pinMode(sw2, INPUT);
 pinMode(sw3, INPUT);
 pinMode(sw4, INPUT);
  
}

void loop()
{
  if(HIGH == digitalRead(sw1))
  {
   digitalWrite(DCMotor1_EN, HIGH);
   digitalWrite(DCMotor1_A,  HIGH);
   digitalWrite(DCMotor1_B,  LOW);
   digitalWrite(DCMotor2_EN, HIGH);
   digitalWrite(DCMotor2_A,  HIGH);
   digitalWrite(DCMotor2_B,  LOW);
   delay(1000);
   digitalWrite(DCMotor1_EN, LOW);
   digitalWrite(DCMotor1_A,  LOW);
   digitalWrite(DCMotor1_B,  LOW);
   digitalWrite(DCMotor2_EN, LOW);
   digitalWrite(DCMotor2_A,  LOW);
   digitalWrite(DCMotor2_B,  LOW);
   delay(100);
  }
   if(HIGH == digitalRead(sw2))
   {
    digitalWrite(DCMotor1_EN, HIGH);
    digitalWrite(DCMotor1_A,  LOW);
    digitalWrite(DCMotor1_B,  HIGH);
    digitalWrite(DCMotor2_EN, HIGH);
    digitalWrite(DCMotor2_A,  LOW);
    digitalWrite(DCMotor2_B,  HIGH);
    delay(1000);
    digitalWrite(DCMotor1_EN, LOW);
    digitalWrite(DCMotor1_A,  LOW);
    digitalWrite(DCMotor1_B,  LOW);
    digitalWrite(DCMotor2_EN, LOW);
    digitalWrite(DCMotor2_A,  LOW);
    digitalWrite(DCMotor2_B,  LOW);
    delay(100);
   }
   if(HIGH == digitalRead(sw3))
  {
   digitalWrite(Rindicator, HIGH);  
   digitalWrite(DCMotor1_EN, HIGH);
   digitalWrite(DCMotor1_A,  HIGH);
   digitalWrite(DCMotor1_B,  LOW);
   digitalWrite(DCMotor2_EN, HIGH);
   digitalWrite(DCMotor2_A,  LOW);
   digitalWrite(DCMotor2_B,  HIGH);
   delay(1000);
   digitalWrite(Rindicator, LOW);
   digitalWrite(DCMotor1_EN, LOW);
   digitalWrite(DCMotor1_A,  LOW);
   digitalWrite(DCMotor1_B,  LOW);
   digitalWrite(DCMotor2_EN, LOW);
   digitalWrite(DCMotor2_A,  LOW);
   digitalWrite(DCMotor2_B,  LOW);
   delay(100);
  }
   if(HIGH == digitalRead(sw4))
   {
   digitalWrite(Lindicator, HIGH);
   digitalWrite(DCMotor1_EN, HIGH);
   digitalWrite(DCMotor1_A,  LOW);
   digitalWrite(DCMotor1_B,  HIGH);
   digitalWrite(DCMotor2_EN, HIGH);
   digitalWrite(DCMotor2_A,  HIGH);
   digitalWrite(DCMotor2_B,  LOW);
   delay(1000);
   digitalWrite(Lindicator, LOW);
   digitalWrite(DCMotor1_EN, LOW);
   digitalWrite(DCMotor1_A,  LOW);
   digitalWrite(DCMotor1_B,  LOW);
   digitalWrite(DCMotor2_EN, LOW);
   digitalWrite(DCMotor2_A,  LOW);
   digitalWrite(DCMotor2_B,  LOW);
   delay(100);
   }
}
