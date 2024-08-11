int in1=3;
int in2=4;

void setup() {
  // put your setup code here, to run once:
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Rotating");
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  

}
