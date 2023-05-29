#include <SoftwareSerial.h>
SoftwareSerial softSerial(2, 3);
char ip;
int inputPin = 7;               // choose the input pin (for Radar sensor)
int val = 0;                    // variable for reading the pin status
 
void setup() {
  pinMode(inputPin, INPUT);     // declare sensor as input
  softSerial.begin(9600);
  Serial.begin(9600);
}
 
void loop() {
  val = digitalRead(inputPin);  // read input value
  if (softSerial.available())
  {
    
    ip=softSerial.read();
    //softSerial.print(ip);
    if (ip == '1') {
      Serial.println("Other sensor motion detected");
    }
  }
  if (val == HIGH) {  // check if the input is HIGH
    //Serial.println("Motion detected!"); // print on output change
  }
  delay(10);
}
