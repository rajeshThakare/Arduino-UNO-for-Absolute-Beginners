const int steeper_motor_A =6;
const int steeper_motor_B =9;
const int steeper_motor_C =10;
const int steeper_motor_D =11;

const int CLKWSW1 = 2;
const int ACLKWSW1 = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(steeper_motor_A, OUTPUT);
  pinMode(steeper_motor_B, OUTPUT);
  pinMode(steeper_motor_C, OUTPUT);
  pinMode(steeper_motor_D, OUTPUT);
  pinMode(CLKWSW1, INPUT);
   pinMode(ACLKWSW1, INPUT);
  
  }
void loop() {

 if(digitalRead(CLKWSW1)==HIGH)
 {
  for(int i =0;i<20; i++)
  {
  digitalWrite(steeper_motor_A , HIGH);
  digitalWrite(steeper_motor_B , LOW);
  digitalWrite(steeper_motor_C , LOW);
  digitalWrite(steeper_motor_D , HIGH);
  delay(10);
  digitalWrite(steeper_motor_A , HIGH);
  digitalWrite(steeper_motor_B , HIGH);
  digitalWrite(steeper_motor_C , LOW);
  digitalWrite(steeper_motor_D , LOW);
  delay(10);
  digitalWrite(steeper_motor_A , LOW);
  digitalWrite(steeper_motor_B , HIGH);
  digitalWrite(steeper_motor_C , HIGH);
  digitalWrite(steeper_motor_D , LOW);
  delay(10);
  digitalWrite(steeper_motor_A , LOW);
  digitalWrite(steeper_motor_B , LOW);
  digitalWrite(steeper_motor_C , HIGH);
  digitalWrite(steeper_motor_D , HIGH);
  delay(10);
  }
 }
   if(digitalRead(ACLKWSW1)==HIGH)
 {
  for(int i =0;i<20; i++)
  {
  digitalWrite(steeper_motor_A , HIGH);
  digitalWrite(steeper_motor_B , LOW);
  digitalWrite(steeper_motor_C , LOW);
  digitalWrite(steeper_motor_D , HIGH);
  delay(10);
  digitalWrite(steeper_motor_A , LOW);
  digitalWrite(steeper_motor_B , LOW);
  digitalWrite(steeper_motor_C , HIGH);
  digitalWrite(steeper_motor_D , HIGH);
  delay(10);
  digitalWrite(steeper_motor_A , LOW);
  digitalWrite(steeper_motor_B , HIGH);
  digitalWrite(steeper_motor_C , HIGH);
  digitalWrite(steeper_motor_D , LOW);
  delay(10);
  digitalWrite(steeper_motor_A , HIGH);
  digitalWrite(steeper_motor_B , HIGH);
  digitalWrite(steeper_motor_C , LOW);
  digitalWrite(steeper_motor_D , LOW);
  delay(10);
   }
 }
}