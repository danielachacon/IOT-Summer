int blue = 4;
int green = 5;
int red = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, OUTPUT);

  analogWriteRange(255);

  digitalWrite(red, HIGH);
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 255; i >= 0; i--)
  {
    analogWrite(green, 255 - i);
    analogWrite(blue, 255 - (i/2));
    delay(10);
  }
   for(int i = 0; i <= 255; i++)
  {
    analogWrite(green, 255 - i);
    analogWrite(blue, 255 - (i/2));
    delay(10);
  }
}
