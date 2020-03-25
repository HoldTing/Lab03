char val;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World!");
  Serial.print("\tLED pin is: ");
  Serial.println(LED_BUILTIN);
  Serial.println("BYE!");
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  if(Serial.available()){
    val=Serial.read();
    if(val == '1'){
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED ON!");
      }
    else if(val == '0'){
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED OFF!");
      }
    }
}
