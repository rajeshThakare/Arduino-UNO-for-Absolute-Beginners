const int Ared = 13;
const int Agreen = 12;
const int Ayellow = 11;

const int Bred = 10;
const int Bgreen = 9;
const int Byellow = 8;

const int Cred = 7;
const int Cgreen = 6;
const int Cyellow = 5;

const int Dred = 4;
const int Dgreen = 3;
const int Dyellow = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(Ared,OUTPUT); pinMode(Agreen,OUTPUT);pinMode(Ayellow,OUTPUT);
pinMode(Bred,OUTPUT);pinMode(Bgreen,OUTPUT);pinMode(Byellow,OUTPUT);
pinMode(Cred,OUTPUT);pinMode(Cgreen,OUTPUT);pinMode(Cyellow,OUTPUT);
pinMode(Dred,OUTPUT);pinMode(Dgreen,OUTPUT);pinMode(Dyellow,OUTPUT);

digitalWrite(Ared,LOW); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,HIGH);
digitalWrite(Bred,LOW); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,HIGH);
digitalWrite(Cred,LOW); digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,HIGH);
digitalWrite(Dred,LOW); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,HIGH);
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
   //Agreen high
digitalWrite(Ared,LOW);  digitalWrite(Agreen,HIGH); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,HIGH); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,LOW);
digitalWrite(Cred,HIGH); digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,HIGH); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,LOW);
delay(1000);
 //Ayellow high
digitalWrite(Ared,LOW); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,HIGH);
digitalWrite(Bred,HIGH); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,LOW);
digitalWrite(Cred,HIGH); digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,HIGH); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,LOW);
delay(1000);

  //Bgreen high 
digitalWrite(Ared,HIGH); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,LOW); digitalWrite(Bgreen,HIGH); digitalWrite(Byellow,LOW);
digitalWrite(Cred,HIGH); digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,HIGH); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,LOW);
delay(1000);

// Byellow high
digitalWrite(Ared,HIGH); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,LOW); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,HIGH);
digitalWrite(Cred,HIGH); digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,HIGH); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,LOW);
delay(1000);

// cgreen high 
digitalWrite(Ared,HIGH); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,HIGH);  digitalWrite(Bgreen,LOW); digitalWrite(Byellow,LOW);
digitalWrite(Cred,LOW); digitalWrite(Cgreen,HIGH); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,HIGH); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,LOW);
delay(1000);

// Cyellow high
digitalWrite(Ared,HIGH); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,HIGH); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,LOW);
digitalWrite(Cred,LOW);  digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,HIGH);
digitalWrite(Dred,HIGH); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,LOW);
delay(1000);

// dgreen high
digitalWrite(Ared,HIGH); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,HIGH); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,LOW);
digitalWrite(Cred,HIGH);  digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,LOW); digitalWrite(Dgreen,HIGH); digitalWrite(Dyellow,LOW);
delay(1000);

// dyellow high
digitalWrite(Ared,HIGH); digitalWrite(Agreen,LOW); digitalWrite(Ayellow,LOW);
digitalWrite(Bred,HIGH); digitalWrite(Bgreen,LOW); digitalWrite(Byellow,LOW);
digitalWrite(Cred,HIGH);  digitalWrite(Cgreen,LOW); digitalWrite(Cyellow,LOW);
digitalWrite(Dred,LOW); digitalWrite(Dgreen,LOW); digitalWrite(Dyellow,HIGH);
delay(1000);
}