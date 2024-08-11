int wTime=1000;

int en1=9;
int en2=10;
int en3=11;
int en4=12;

int in1=51;
int in2=50;
int in3=53;
int in4=52;

int in5=47;
int in6=46; 
int in7=49;
int in8=48;

int irSens1=40;
int irSens2=41;
int irSens3=38;
int irSens4=39;

int motorSpeed=175;

int read1, read2, read3, read4;

void setup() {
  // put your setup code here, to run once:

  TCCR1B = TCCR1B & B11111000 | B00000001; //set timer 1 divisor to 1 and sets PWM frequency to 31372.55Hz

  TCCR2B = TCCR2B & B11111000 | B00000001; //set timer 2 divisor to 1 and sets PWM frequency to 31372.55Hz
  

  // set timer 1 divisor to 8 for PWM frequency of 3921.16 Hz for pin 11 and 12
//  TCCR1B = TCCR1B & B11111000 | B00000010; 

  // set timer 2 divisor to 8 for PWM frequency of 3921.16 Hz for pin 9 and 10
//  TCCR2B = TCCR2B & B11111000 | B00000010; 
  
  // setting the for PWM and inputs for L293(motor1 and motor2)
  pinMode(en1, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(en2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // setting the for PWM and inputs for L298(motor3 and motor4)
  pinMode(en3, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(en4, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  read2=digitalRead(irSens2);
  read3=digitalRead(irSens3);
  if (read2==1 && read3==1){
    moveForward();
  }
  else if(read2==0 && read3==1){
    moveLeft();
  }
  else if (read2==1 && read3==0){
    moveRight();
  }
  else{
    stopMoving();
  }
  
}


void moveForward(){
  analogWrite(en1, motorSpeed);
  analogWrite(en2, motorSpeed);
  analogWrite(en3, motorSpeed);
  analogWrite(en4, motorSpeed);
    //LEFT TURN
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);

  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
}

void moveLeft(){
  motorSpeed=185;
  analogWrite(en1, motorSpeed);
  analogWrite(en2, motorSpeed);
  analogWrite(en3, motorSpeed);
  analogWrite(en4, motorSpeed);
    //LEFT TURN
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);

  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  digitalWrite(in6, HIGH);

  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
}

void moveRight(){
  motorSpeed=185;
  analogWrite(en1, motorSpeed);
  analogWrite(en2, motorSpeed);
  analogWrite(en3, motorSpeed);
  analogWrite(en4, motorSpeed);
  //RIGHT TURN
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);

  digitalWrite(in7, LOW);
  digitalWrite(in8, HIGH);
}


void stopMoving(){
  analogWrite(en1, motorSpeed);
  analogWrite(en2, motorSpeed);
  analogWrite(en3, motorSpeed);
  analogWrite(en4, motorSpeed);
  //DO NOT MOVE 
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);

  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);

  digitalWrite(in5, LOW);
  digitalWrite(in6, LOW);

  digitalWrite(in7, LOW);
  digitalWrite(in8, LOW);
}
