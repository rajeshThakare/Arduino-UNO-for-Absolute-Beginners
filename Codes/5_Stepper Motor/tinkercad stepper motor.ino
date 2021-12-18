int DCstepper_EN1 = 8;
int DCstepper_EN2 = 11;
int DCstepper_A  = 7;
int DCstepper_B  = 6;
int DCstepper_C  = 10;
int DCstepper_D  = 9;

void setup ()
{

 pinMode(DCstepper_EN1 ,OUTPUT);
 pinMode(DCstepper_EN2 ,OUTPUT);
 pinMode(DCstepper_A  ,OUTPUT);
 
 pinMode(DCstepper_B ,OUTPUT);
 pinMode(DCstepper_C  ,OUTPUT);
 pinMode(DCstepper_D  ,OUTPUT);
  
}
void loop()
{
  digitalWrite(DCstepper_EN1, HIGH);
  digitalWrite(DCstepper_EN2,  HIGH);
  
  digitalWrite(DCstepper_A,  HIGH);
  digitalWrite(DCstepper_B,  LOW);
  digitalWrite(DCstepper_C,  LOW);
  digitalWrite(DCstepper_D,  HIGH);
  delay(10);
  digitalWrite(DCstepper_A,  HIGH);
  digitalWrite(DCstepper_B,  HIGH);
  digitalWrite(DCstepper_C,  LOW);
  digitalWrite(DCstepper_D,  LOW);
  delay(10);
  digitalWrite(DCstepper_A,  LOW);
  digitalWrite(DCstepper_B,  HIGH);
  digitalWrite(DCstepper_C,  HIGH);
  digitalWrite(DCstepper_D,  LOW);
  delay(10);
  digitalWrite(DCstepper_A,  LOW);
  digitalWrite(DCstepper_B,  LOW);
  digitalWrite(DCstepper_C,  HIGH);
  digitalWrite(DCstepper_D,  HIGH);
  delay(10);
  
 
  
  
}
