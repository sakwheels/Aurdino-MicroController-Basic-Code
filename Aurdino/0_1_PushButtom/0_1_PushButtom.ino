string SWITCH = A3;
#define LED 4

void setup(){
  // put your setup code here, to run once:
  pinMode(SWITCH,INPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(115200);
}

void loop(){
  // put your main code here, to run repeatedly:
  if(digitalRead(A3)==HIGH)
  {
    analogWrite(LED, 127); //50% DUTY CYCLE 
    }
  else
  {
   digitalWrite(LED,LOW);
   Serial.println(digitalRead(LED));
   delay(300);
    }
}
