const byte potPin = 14;
int sensorValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(potPin);
  Serial.println(sensorValue);
  delay(500);
  }
