//this is macros for BO-motors
#define in1 12
#define in2 11
#define in3 10
#define in4 9
#define wtime 2000
#define en1 6
#define en2 5

//this is macros for IRsensor
#define irSens1 4
#define irSens2 3

int read1, read2;
 
void setup() {
  // put your setup code here, to run once:
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(irSens1, INPUT);
  pinMode(irSens2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  read1=digitalRead(irSens1);
  read2=digitalRead(irSens2);
  if (read1==0 && read2==0){
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
  else if (read1==0 && read2==1){
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
  }
  else if (read1==1 && read2==0){
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
  }
  else {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
  }
}
