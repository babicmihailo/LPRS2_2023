#include <SoftwareSerial.h>
SoftwareSerial softSerial(2, 3);
int inputPin = 7;          
int val = 0;                
 
void setup() {
  pinMode(inputPin, INPUT);    
  softSerial.begin(9600);
  Serial.begin(9600);
}
 
void loop() {
  val = digitalRead(inputPin);  
  if (val == HIGH) {  
    //Serial.println("Motion detected!"); 
    softSerial.write("1");
  }
  else {
    softSerial.write("0");
  }
  delay(1000);
}
