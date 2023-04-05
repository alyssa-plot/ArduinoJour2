// int rougePin =
// int vertPin = 
// int bleuPin = 

// int potPin =

void setup() {
  pinMode(rougePin, OUTPUT);
  pinMode(vertPin, OUTPUT);
  pinMode(bleuPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  int rougeValue = map(potValue, 0, 1023, 0, 255);
  int vertValue = map(potValue, 0, 1023, 0, 255);
  int bleuValue = map(potValue, 0, 1023, 0, 255);

  analogWrite(rougePin, rougeValue);
  analogWrite(vertPin, vertValue);
  analogWrite(bleuPin, bleuValue);

  delay(1000);
}
