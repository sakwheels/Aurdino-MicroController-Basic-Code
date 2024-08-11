//DIGITAL I/O FUNCTIONS
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  
  pinMode(2, OUTPUT);
  
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(12);
 // Serial.print(value);
  Serial.println(value);

  digitalWrite(2, value);
}
