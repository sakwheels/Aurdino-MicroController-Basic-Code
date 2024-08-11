int in1=7;
int in2=6;
int in3=8;
int in4=9;
int wTime=2000;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(wTime);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(wTime);
  
}  
