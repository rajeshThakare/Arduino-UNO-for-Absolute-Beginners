int DCMotor1_EN = 13;
int DCMotor1_A  = 12;
int DCMotor1_B  = 11;

int DCMotor2_EN = 10;
int DCMotor2_A  = 9;
int DCMotor2_B  = 8;

void setup ()
{

 pinMode(DCMotor1_EN ,OUTPUT);
 pinMode(DCMotor1_A  ,OUTPUT);
 pinMode(DCMotor1_B  ,OUTPUT);
 
 pinMode(DCMotor2_EN ,OUTPUT);
 pinMode(DCMotor2_A  ,OUTPUT);
 pinMode(DCMotor2_B  ,OUTPUT);
  
}
void loop()
{
  digitalWrite(DCMotor1_EN, HIGH);
  digitalWrite(DCMotor1_A,  HIGH);
  digitalWrite(DCMotor1_B,  LOW);
   digitalWrite(DCMotor2_EN, HIGH);
  digitalWrite(DCMotor2_A,  HIGH);
  digitalWrite(DCMotor2_B,  LOW);
  delay(2000);
  digitalWrite(DCMotor1_EN, LOW);
  digitalWrite(DCMotor1_A,  LOW);
  digitalWrite(DCMotor1_B,  LOW);
  digitalWrite(DCMotor2_EN, LOW);
  digitalWrite(DCMotor2_A,  LOW);
  digitalWrite(DCMotor2_B,  LOW);
  delay(1000);
  
  digitalWrite(DCMotor1_EN, HIGH);
  digitalWrite(DCMotor1_A,  LOW);
  digitalWrite(DCMotor1_B,  HIGH);
  
  digitalWrite(DCMotor2_EN, HIGH);
  digitalWrite(DCMotor2_A,  LOW);
  digitalWrite(DCMotor2_B,  HIGH);
  delay(2000);
  digitalWrite(DCMotor1_EN, LOW);
  digitalWrite(DCMotor1_A,  LOW);
  digitalWrite(DCMotor1_B,  LOW);
  digitalWrite(DCMotor2_EN, LOW);
  digitalWrite(DCMotor2_A,  LOW);
  digitalWrite(DCMotor2_B,  LOW);
  delay(1000);
  
  
}
