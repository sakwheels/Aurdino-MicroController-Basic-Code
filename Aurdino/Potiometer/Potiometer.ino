byte LED = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, checkSensor());
}

int checkSensor(){
  int portvalue = analogRead(A0);
  Serial.println(portvalue);
  if (portvalue>300)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
