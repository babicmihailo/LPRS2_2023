#include <SoftwareSerial.h>
SoftwareSerial softSerial(2, 3);
char ip;
int inputPin = 7;               
int val = 0;                    
 
void setup() {
  pinMode(inputPin, INPUT);   
  softSerial.begin(9600);
  Serial.begin(9600);
}
 
void loop() {
  val = digitalRead(inputPin);  
  if (softSerial.available())
  {
    
    ip=softSerial.read();
    if (ip == '1') {
      Serial.println("Motion detected! (2nd)");
    }
  }
  if (val == HIGH) {
    Serial.println("Motion detected!"); 
  }
  delay(1000);
}
