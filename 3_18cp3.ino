const byte potPin = 14;
double sensorVoltage;
int sensorValue;
int i;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(potPin);
  for(i=0;i<2.5;i++)
    sensorValue = 0.7*sensorValue+0.3*analogRead(potPin);
  sensorVoltage=2.5*sensorValue/(4095);
  Serial.println(sensorValue);
  Serial.println(sensorVoltage);
  delay(500);
  }
