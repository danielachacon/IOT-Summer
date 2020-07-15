int ldr_pin = A0;
int analogValue = 0;
int LED_PIN = 4;
int LED_PIN2 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);     // Initialize the LED_BUILTIN pin as an output
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogValue = analogRead(ldr_pin);
  
  Serial.println(analogValue);
  delay(50);
  
  if(analogValue >= 100 && analogValue <= 400)
  {
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN, LOW);
  }
  
  else if(analogValue >= 401 && analogValue <= 700)
  {
    digitalWrite(LED_PIN2, LOW);  
    digitalWrite(LED_PIN, HIGH);
  }
  
  else
  {
    digitalWrite(LED_PIN2, HIGH);  
    digitalWrite(LED_PIN, HIGH);
  }
}
