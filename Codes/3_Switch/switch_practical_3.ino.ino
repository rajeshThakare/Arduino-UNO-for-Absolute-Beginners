const int LED1 = 7;
const int LED2 = 6;
const int LED3 = 5;
const int LED4 = 4;
const int switch1 =2;
int count=0;
void setup() {
  // put your setup code here, to run once:
pinMode(LED1, OUTPUT);
pinMode(LED1, OUTPUT);
pinMode(LED1, OUTPUT);
pinMode(LED1, OUTPUT);
pinMode(switch1, INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
int swinput = digitalRead(switch1);
if(swinput == HIGH && count == 0)
  {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED4, LOW);
    count++;
    delay(2000);
  }
 
  swinput = digitalRead(switch1);

if(swinput == HIGH && count == 1)
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    count++;
    delay(1000);
  }
  swinput = digitalRead(switch1);

if(swinput == HIGH && count == 2)
  {
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    count++;
    delay(1000);
  }

  swinput = digitalRead(switch1);
 
if(swinput == HIGH && count == 3)
  {
    digitalWrite(LED3, LOW);
    digitalWrite(LED4, HIGH);
    count=0;
    delay(1000);
  }
  
  




}