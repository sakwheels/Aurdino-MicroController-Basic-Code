#define tri 8
//#define rLed 14
//#define gLed 18
#define echo 9
float tRead=0;
float distance=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(tri,OUTPUT);
  pinMode(echo,INPUT);
  //pinMode(rLed,OUTPUT);
  //pinMode(gLed,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(tri,LOW);
  delayMicroseconds(2);
  
  digitalWrite(tri, HIGH);
  delayMicroseconds(10);
  
  digitalWrite(tri, LOW);
  
  tRead = pulseIn(echo, HIGH);
  distance=0.0343*(tRead/2);
  Serial.print("Distance=");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);

  /*if (distance<20){
    Serial.print("Less Distance...Alter!!!");
    //digitalWrite(rLed,HIGH);
    // digitalWrite(gLed,LOW);
  }
  else{
    digitalWrite(gLed,HIGH);
     digitalWrite(rLed,LOW);
  }*/
  
  //delay(1000);
}
