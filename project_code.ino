int sensorPin = 0;    //Microphone Sensor Pin on analog 0
int ledPin = 13;
int sensorValue;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); 
  int noise = ((sensorValue+321.01)/11.867);
  Serial.println(noise);
  delay(100);
  if (noise > 65) {
digitalWrite(ledPin, HIGH);
  delay(1000);
  }  
  else {
    digitalWrite(ledPin, LOW); 
  }
}   
