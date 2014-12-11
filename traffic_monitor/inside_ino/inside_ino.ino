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
int lastBack1 = 0; 
int lastBack2 = 0;
int lastFront1 = 0;
int lastFront2 = 0;
float minPctgChange = 1.3; // At least x to register
int minMax = 10;

void loop() {
  int sensorValueBack1 = analogRead(A2);
  int sensorValueBack2 = analogRead(A1);
  Serial.println(sensorValueBack1);
  Serial.println(sensorValueBack2);
//  int sensorValueFront1 = analogRead(A4);
//  int sensorValueFront2 = analogRead(A5);

//  Serial.print("Sensor Front2 val: ");
//  Serial.println(sensorValueFront2);
  
  if((sensorValueBack1 / float(lastBack1) )> minPctgChange ){
//    Serial.print("Back1 ");
//    Serial.println(sensorValueBack1);
    if(sensorValueBack1 > minMax){
    
      Serial.println("Back1"); 
      digitalWrite(backPin, HIGH);
      delay(1);
      digitalWrite(backPin, LOW);
    }
  }
  
  if(((sensorValueBack2) / float(lastBack2)) > minPctgChange){
//    Serial.print("Back2 ");
//    Serial.println(sensorValueBack2);
    if(sensorValueBack2 > minMax){
      Serial.println("Back2"); 
      digitalWrite(backPin, HIGH);
      delay(1);
      digitalWrite(backPin, LOW);
    }
  }
  
//  if(((sensorValueFront1) / float(lastFront1))> minPctgChange){
////    Serial.print("Front1 ");
////    Serial.println(sensorValueFront1);
//    if(sensorValueFront1 > minMax){
//      Serial.println("Front1"); 
//      digitalWrite(frontPin, HIGH);
//      delay(1);
//      digitalWrite(frontPin, LOW);
//    }
//  }
//    
//  if(((sensorValueFront2) / float(lastFront2)) > minPctgChange){
////    Serial.print("Front2 ");
////    Serial.println(sensorValueFront2);
//    if(sensorValueFront2 > minMax){
//      Serial.println("Front2"); 
//      digitalWrite(frontPin, HIGH);
//      delay(1);
//      digitalWrite(frontPin, LOW);
//    }
//  }
  
  
  lastBack1 = sensorValueBack1;
  lastBack2 = sensorValueBack2;
//  lastFront1 = sensorValueFront1;
//  lastFront2 = sensorValueFront2;
  
  delay(100);        // delay in between reads for stability
//  Serial.println(sensorValueBack1);
//  Serial.print("Back2:"); 
//  Serial.println((sensorValueBack2 - lastBack2) / float(sensorValueBack2) > .1);
//  Serial.println(sensorValueBack2);
//  Serial.print("Front1:"); 
//  Serial.println((sensorValueFront1 - lastFront1) / float(sensorValueFront1) > .1);
//  Serial.println(sensorValueFront1);
//  Serial.print("Front2:"); 
//  Serial.println((sensorValueFront2 - lastFront2) / float(sensorValueFront2) > .1);
//  Serial.println(sensorValueFront2);
  
  

  
  
//  if(threshCount < 100)
//    threshCount++;
//  else
//    threshTotal = threshTotal - thresh;
//  if(sensorValueBack1 > sensorValueBack2 && sensorValueBack1 > sensorValueFront1 && sensorValueBack1 > sensorValueFront2)
//    threshTotal = threshTotal + sensorValueBack1;
//  else if(sensorValueBack2 > sensorValueBack1 && sensorValueBack2 > sensorValueFront1 && sensorValueBack2 > sensorValueFront2)
//    threshTotal = threshTotal + sensorValueBack2;
//  else if(sensorValueFront1 > sensorValueBack1 && sensorValueFront1 > sensorValueBack2 && sensorValueFront1 > sensorValueFront2)
//    threshTotal = threshTotal + sensorValueFront1;
//  else
//    threshTotal = threshTotal + sensorValueFront2;
//  thresh = 0;
//  
//  // read the input on analog pin 0:
//  if(sensorValueBack1 > thresh)
//  {

//  }
//  if(sensorValueBack2 > thresh)
//  {
//    digitalWrite(backPin, HIGH);
//    Serial.println(sensorValueBack2);
//    delay(1);
//    digitalWrite(backPin, LOW);
//  }
//  if(sensorValueFront1 > thresh)
//  {
//    digitalWrite(frontPin, HIGH);
//    Serial.println(sensorValueFront1);
//    delay(1);
//    digitalWrite(frontPin, LOW);
//  }
//  if(sensorValueFront2 > thresh)
//  {
//    digitalWrite(frontPin, HIGH);
//    Serial.println(sensorValueFront2);
//    delay(1);
//    digitalWrite(frontPin, LOW);
//  }
  //Serial.print("thresh: ");
  //Serial.println(thresh);

}
