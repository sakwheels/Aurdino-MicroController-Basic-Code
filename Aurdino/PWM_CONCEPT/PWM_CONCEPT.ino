//PWM CONCEPT
# define LED 13
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i; i <= 255; i++)
  {
    analogWrite(LED, i);
    delay(15);
    }
  for(int j=255; j >= 0; j--)
  {
    analogWrite(LED, j);
    delay(15);
    }  
}
