int A_LED1 = 13;      /// 1001 
int B_LED2 = 12;      /// 1100   ///0110  ///0011
int C_LED3 = 11;
int D_LED4 = 10;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(A_LED1, OUTPUT);
  pinMode(B_LED2, OUTPUT);
  pinMode(C_LED3, OUTPUT);
  pinMode(D_LED4, OUTPUT);  
 }

// the loop function runs over and over again forever
void loop() {
  digitalWrite(A_LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, LOW);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(C_LED3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D_LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(A_LED1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, LOW);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(C_LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D_LED4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(A_LED1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, HIGH);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(C_LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D_LED4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(A_LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, HIGH);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(C_LED3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D_LED4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
 }