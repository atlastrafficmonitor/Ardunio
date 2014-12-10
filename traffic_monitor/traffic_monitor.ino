//Traffic monitor code
//Author: Adrian Chen
//Date: 12-9-2014
const int backPin = 13;
const int frontPin = 14;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(backPin, OUTPUT); 
  pinMode(frontPin, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  
  int sensorValueBack1 = analogRead(A0);
  int sensorValueBack2 = analogRead(A1);
  int sensorValueFront1 = analogRead(A4);
  int sensorValueFront2 = analogRead(A5);
  
  // read the input on analog pin 0:
  if(sensorValueBack1 > 5)
  {
    digitalWrite(backPin, HIGH);
    delay(5);
    digitalWrite(backPin, LOW);
  }
  if(sensorValueBack2 > 5)
  {
    digitalWrite(backPin, HIGH);
    delay(5);
    digitalWrite(backPin, LOW);
  }
  if(sensorValueFront1 > 5)
  {
    digitalWrite(frontPin, HIGH);
    delay(5);
    digitalWrite(frontPin, LOW);
  }
  if(sensorValueFront2 > 5)
  {
    digitalWrite(frontPin, HIGH);
    delay(5);
    digitalWrite(frontPin, LOW);
  }
  delay(1);        // delay in between reads for stability
}
