int rs=9;
int led=25;
int input=0;
void setup(){
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(rs,INPUT);
  pinMode(led,OUTPUT);
}

void loop(){
  // put your main code here, to run repeatedly:
  input = digitalRead(rs);
  Serial.print("Read Voltage");
  Serial.println(input);

  if(input)
  {
    digitalWrite(led, LOW);
    }
  else
  {
    digitalWrite(led, HIGH);
    }
}
