int sak = 7;
//int sak2 = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(sak,OUTPUT);
  //pinMode(sak2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(sak,HIGH);
  delay(50);
  digitalWrite(sak,LOW);
  delay(50);

//  digitalWrite(sak2,HIGH);
//  delay(50);
//  digitalWrite(sak2,LOW);
//  delay(100);

}
