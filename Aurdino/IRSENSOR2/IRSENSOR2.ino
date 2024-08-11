int irSens1=4;
int irSens2=3;
int read1, read2;
int in1=5;
int in2=6;
int in3=7;
int in4=8;



int in5=9;
int in6=10;
int in7=11;
int in8=12;

int wTime=1000;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(irSens1, INPUT);
  pinMode(irSens2, INPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  read1=digitalRead(irSens1);
  read2=digitalRead(irSens2);
  Serial.print("read1=");
  Serial.print(read1);
  Serial.print(" || read2=");
  Serial.println(read2);
  delay(wTime);
  if (read1==1 && read2==1){
    moveForward();
  }
  else if (read1==0 && read2==1){
    moveRight();
  }
  else if(read1==1 && read2==0){
    moveLeft();
  }
  else {
    moveBackward();
  }
}

void moveForward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5, HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW;
}

void moveLeft(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5,HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
}

void moveRight(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5,HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
}

void moveBackward(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);

  digitalWrite(in5,HIGH);
  digitalWrite(in6, LOW);
  digitalWrite(in7, HIGH);
  digitalWrite(in8, LOW);
}
