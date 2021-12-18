int G_LED1 = 13;      
int B_LED2 = 12;     
int R_LED3 = 11;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(G_LED1, OUTPUT);
  pinMode(B_LED2, OUTPUT);
  pinMode(R_LED3, OUTPUT);
 }

// the loop function runs over and over again forever
void loop() {
  digitalWrite(G_LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, LOW);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(R_LED3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(G_LED1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, HIGH);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(R_LED3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(1000);   
  digitalWrite(G_LED1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(B_LED2, LOW);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(R_LED3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);   
 
 }