//Simple PUsh Button with pull up and pull down resistor concept[SAK Wheels]
byte SWITCH = A7;
byte LED = 7;
void setup() {
  // put your setup code here, to run once:
pinMode(SWITCH,INPUT_PULLUP);
pinMode(LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(A7)== HIGH)
{
  digitalWrite(LED,HIGH);
  }
else
{
  digitalWrite(LED,LOW);
  }
}
