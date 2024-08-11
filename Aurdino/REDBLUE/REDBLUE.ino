int bled = 9;
int rled = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(bled,OUTPUT);
   pinMode(rled,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("TURNING ON BLUE LED!");
  digitalWrite(bled,HIGH);
  delay(1000);
   Serial.println("TURNING OFF BLUE LED!");
  digitalWrite(bled,LOW);
  delay(1000);
  

  
  Serial.println("TURNING ON RED LED!");
  digitalWrite(rled,HIGH);
  delay(1000);
  Serial.println("TURNING OFF RED LED!");
  digitalWrite(rled,LOW);
  delay(1000);
  
}
  
