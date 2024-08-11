#include <SoftwareSerial.h>

#define LED_PIN 10  // Define the pin connected to the LED
SoftwareSerial bluetoothSerial(0, 1);  // RX, TX pins for HC-05 Bluetooth module

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Set the LED pin as output
  digitalWrite(LED_PIN, LOW); // Turn off the LED initially
  
  Serial.begin(9600);  // Start serial communication for debugging
  bluetoothSerial.begin(9600);  // Start Bluetooth serial communication
}

void loop() {
  if (bluetoothSerial.available()) {
    char receivedChar = bluetoothSerial.read(); // Read the incoming byte from Bluetooth
    Serial.print("Received: ");
    Serial.println(receivedChar); // Print the received character for debugging

    if (receivedChar == '1') 
    {
      digitalWrite(LED_PIN, HIGH); // Turn on the LED if '1' is received
    } 
    else if (receivedChar == '0') 
    {
      digitalWrite(LED_PIN, LOW); // Turn off the LED if '0' is received
    }
  }
}

//We're using SoftwareSerial to communicate with the HC-05 Bluetooth module since it allows us to use digital pins as serial pins.
