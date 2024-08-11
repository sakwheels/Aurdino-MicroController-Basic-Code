#define in1 12
#define in2 11
#define in3 10
#define in4 9
#define wtime 2000
#define en1 6
#define en2 5

 
void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//  digitalWrite(in3, HIGH);
//  digitalWrite(in4, LOW);
//  delay(wtime);
//
//  digitalWrite(in3, LOW);
//  digitalWrite(in4, LOW);
//  delay(wtime);
//
//  digitalWrite(in3, LOW);
//  digitalWrite(in4, HIGH);
//  delay(wtime);
//
//  digitalWrite(in3, LOW);
//  digitalWrite(in4, LOW);
//  delay(wtime);
  int pwmSpeed=250;
  fastSpeed(pwmSpeed);
  pwmSpeed=150;
  slowSpeed(pwmSpeed);
}

void fastSpeed(int pwmSpeed){
  analogWrite(en1, pwmSpeed);
  analogWrite(en2, pwmSpeed);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4,LOW);
  
  delay(wtime);

  
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
   digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  
  delay(wtime);
}

void slowSpeed(int pwmSpeed){
  analogWrite(en1, pwmSpeed);
  analogWrite(en2, pwmSpeed);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  
  delay(wtime);

  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  
  delay(wtime);
  
}
