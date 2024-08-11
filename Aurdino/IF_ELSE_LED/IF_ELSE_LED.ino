//LED 1 or 0
//ControlStructure(IF-ELSE STATEMENT)
//LED->pinNo:6
//PushButtomSwitch->pinNo:2
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(6,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(2);
  
  if (value == 1)
  {
    digitalWrite(6,HIGH);
  }
  
  else
  { 
    digitalWrite(6,LOW);
  }
}
/*
 # define LEDR 14
# define LEDL 21
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDR,OUTPUT);
  pinMode(LEDL,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
BlinkLedR(LEDR, 100);
BlinkLedL(LEDL, 100);
int valueR = digitalRead(14);
int valueL = digitalRead(21);
if valueR 

}
void BlinkLedR(int pin, int del_val){
  digitalWrite(pin,HIGH);
  delay(del_val);
  digitalWrite(pin,LOW);
  delay(del_val);
}
void BlinkLedL(int pin, int del_val){
  digitalWrite(pin,HIGH);
  delay(del_val);
  digitalWrite(pin,LOW);
  delay(del_val);
}

*/
