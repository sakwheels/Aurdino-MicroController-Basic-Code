// IR Sensor
#define IR_SENSOR1 40
#define IR_SENSOR2 41
#define IR_SENSOR3 38 
#define IR_SENSOR4 39

//Motor Driver L298N
#define LEFT_MOTOR_ENABLE 
#define RIGHT_MOTOR_ENABLE 
#define LEFT_MOTOR_IN1 
#define LEFT_MOTOR_IN2 
#define RIGHT_MOTOR_IN1 
#define RIGHT_MOTOR_IN2 

// Define threshold values for sensor readings
#define IR_THRESHOLD 500 ; // ROBOT ON LINEVALUE=800 ROBOT OFF LINEVALUE=200
#define maxSpeed 255; //Maximum Motor Speed (100% Duty Cycle)

void setup() {
  // put your setup code here, to run once:
  //PWM: Speed Control
  pinMode(LEFT_MOTOR_ENABLE, OUTPUT);
  pinMode(RIGHT_MOTOR_ENABLE, OUTPUT);

  //H-Bridge :Motor Direction(Forward & Reverse)
  pinMode(LEFT_MOTOR_IN1, OUTPUT);
  pinMode(LEFT_MOTOR_IN2, OUTPUT);
  pinMode(RIGHT_MOTOR_IN1, OUTPUT);
  pinMode(RIGHT_MOTOR_IN2, OUTPUT);

  //Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Reading SENnsor values
  int Sensor1Value = analogRead(IR_SENSOR1);
  int Sensor2Value = analogRead(IR_SENSOR2);
  int Sensor3Value = analogRead(IR_SENSOR3);
  int Sensor4Value = analogRead(IR_SENSOR4);

  // Determine motor speeds based on sensor readings
  int leftMotorSpeed = 0;
  int rightMotorSpeed = 0;

  /*int ERROR = IR_SENSOR2 - IR_SENSOR3; // IR_SENSOR1 - IR_SENSOR4

  if (ERROR >IR_THRESHOLD)
  {
    //Turn Left
    analogWrite(,0);
    analogWrite(,maxSpeed); 
  }
  else if (error <=IR_THRESHOLD)
  {
    //Turn Right
    analogWrite(,0);
    analogWrite(,maxSpeed); 
  }
  else
  {
    //Move Forward
    analogWrite(,maxSpeed);
    analogWrite(,maxSpeed); 
  } */

//Delay For Stability
  delay(100);
}
