const int DC_EN1 =13;
const int DC_A1  =12;
const int DC_B1  =11;

const int DC_EN2 =10;
const int DC_A2  =9;
const int DC_B2  =8;

const int sw1 =1;
const int sw2 =2;
const int sw3 =3;
const int sw4 =4;


void setup() {
  // put your setup code here, to run once:
pinMode(DC_EN1, OUTPUT);
pinMode(DC_A1, OUTPUT);
pinMode(DC_B1, OUTPUT);
pinMode(DC_EN2, OUTPUT);
pinMode(DC_A2, OUTPUT);
pinMode(DC_B2, OUTPUT);

pinMode(sw1, INPUT);
pinMode(sw2, INPUT);
pinMode(sw3, INPUT);
pinMode(sw4, INPUT);

digitalWrite(DC_EN1,LOW);
digitalWrite(DC_A1,LOW);
digitalWrite(DC_B1,LOW);
digitalWrite(DC_EN2,LOW);
digitalWrite(DC_A2,LOW);
digitalWrite(DC_B2,LOW);

delay(200);
}

void loop() {

  int forward = digitalRead(sw1);
  int revers  = digitalRead(sw2);
  int left1   = digitalRead(sw3);
  int right   = digitalRead(sw4);
  
  
  if(forward == HIGH)
  {    
   digitalWrite(DC_EN1,HIGH); 
   digitalWrite(DC_A1,HIGH);
   digitalWrite(DC_B1,LOW);
   digitalWrite(DC_EN2,HIGH);
   digitalWrite(DC_A2,HIGH);
   digitalWrite(DC_B2,LOW);
   delay(2000);
   digitalWrite(DC_EN1,LOW);
   digitalWrite(DC_A1,LOW);
   digitalWrite(DC_B1,LOW);
   digitalWrite(DC_EN2,LOW);
   digitalWrite(DC_A2,LOW);
   digitalWrite(DC_B2,LOW);
   delay(1000);
  }

if(revers== HIGH)
  {    
   digitalWrite(DC_EN1,HIGH); 
   digitalWrite(DC_A1,LOW);
   digitalWrite(DC_B1,HIGH);
   digitalWrite(DC_EN2,HIGH);
   digitalWrite(DC_A2,LOW);
   digitalWrite(DC_B2,HIGH);
   delay(2000);
   digitalWrite(DC_EN1,LOW);
   digitalWrite(DC_A1,LOW);
   digitalWrite(DC_B1,LOW);
   digitalWrite(DC_EN2,LOW);
   digitalWrite(DC_A2,LOW);
   digitalWrite(DC_B2,LOW);
   delay(1000);
  }
if(left1== HIGH)
  {    
   digitalWrite(DC_EN1,HIGH); 
   digitalWrite(DC_A1,LOW);
   digitalWrite(DC_B1,HIGH);
   digitalWrite(DC_EN2,HIGH);
   digitalWrite(DC_A2,HIGH);
   digitalWrite(DC_B2,LOW);
   delay(2000);
   digitalWrite(DC_EN1,LOW);
   digitalWrite(DC_A1,LOW);
   digitalWrite(DC_B1,LOW);
   digitalWrite(DC_EN2,LOW);
   digitalWrite(DC_A2,LOW);
   digitalWrite(DC_B2,LOW);
   delay(1000);
  }
  if(right== HIGH)
  {    
   digitalWrite(DC_EN1,HIGH); 
   digitalWrite(DC_A1,HIGH);
   digitalWrite(DC_B1,LOW);
   digitalWrite(DC_EN2,HIGH);
   digitalWrite(DC_A2,LOW);
   digitalWrite(DC_B2,HIGH);
   delay(2000);
   digitalWrite(DC_EN1,LOW);
   digitalWrite(DC_A1,LOW);
   digitalWrite(DC_B1,LOW);
   digitalWrite(DC_EN2,LOW);
   digitalWrite(DC_A2,LOW);
   digitalWrite(DC_B2,LOW);
   delay(1000);
  }

}