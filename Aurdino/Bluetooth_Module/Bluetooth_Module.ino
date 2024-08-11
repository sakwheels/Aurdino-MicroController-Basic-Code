#define LED 10
int data;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available() >0)
  
  {
   // char dummy = Serial.read();
    //Serial Buffer
    data = Serial.read();

    //Displaying Data In Serial Monitor 
    Serial.println(data);

  //LED Control
    if (data == 'O')
    {
      digitalWrite(LED, HIGH); 
      Serial.println("Hello SAK Wheels! LED TURNING ON!!!");
    }
    if (data == 'F')
    {
      Serial.println("Hello SAK Wheels! LED TURNING OFF!!!");
      digitalWrite(LED, LOW); 
    }
  }
}
/*void clearSerialBuffer() {
    while (Serial.available() > 0) {
        char dummy = Serial.read();
    }
}
*/
