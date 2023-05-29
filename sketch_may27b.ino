#include <SoftwareSerial.h>
SoftwareSerial softSerial(2, 3);
int inputPin = 7;               // choose the input pin (for Radar sensor)
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(inputPin, INPUT);     // declare sensor as input
  softSerial.begin(9600);
  Serial.begin(9600);
}
 
void loop() {
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {  // check if the input is HIGH
    Serial.println("Motion detected!"); // print on output change
    softSerial.write("1");
  }
  else {
    softSerial.write("0");
  }
  delay(1000);
}
