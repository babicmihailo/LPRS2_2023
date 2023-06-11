const int sensorPin1 = A0;
const int sensorPin2 = A1;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin1, OUTPUT);
  pinMode(sensorPin2, OUTPUT);
}

void loop() {
  int sensor1Value = analogRead(sensorPin1);
  int sensor2Value = analogRead(sensorPin2);

  float voltage1 = sensor1Value * (5.0 / 1023.0);
  float voltage2 = sensor2Value * (5.0 / 1023.0);

  Serial.print("Data: ");
  Serial.print(voltage1);
  Serial.print(", ");
  Serial.println(voltage2);

  delay(500);
}
