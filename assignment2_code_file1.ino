// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(2, LOW);
  
  digitalWrite(2, HIGH);
  delayMicroseconds(20); // Wait for 10 microsecond(s)
  digitalWrite(2, LOW);
  int dur=pulseIn(3,HIGH); // pulsein used for getting duration
  int distance=(dur*0.0343)/2;
  Serial.print("Distance in cm: ");
  Serial.println(distance);
  if(distance<329){
    digitalWrite(12, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
    digitalWrite(12, LOW);
    delay(1000); // Wait for 1000 millisecond(s)
    
  }
}