int ldr_pin = A0;
int analogValue = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(ldr_pin);
  Serial.println(analogValue);
  delay(50);
}
