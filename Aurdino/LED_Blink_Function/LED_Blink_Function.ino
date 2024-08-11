#define LED1 5
//#define LED2 7

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
 // pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  BlinkLed(LED1, 50);
}

void BlinkLed(int pin, int del_val){
  digitalWrite(pin,HIGH);
  delay(del_val);
  digitalWrite(pin,LOW);
  delay(del_val);
/*
  digitalWrite(LED2,HIGH);
  delay(400);
  digitalWrite(LED2,LOW);
  delay(400);
 */
}
