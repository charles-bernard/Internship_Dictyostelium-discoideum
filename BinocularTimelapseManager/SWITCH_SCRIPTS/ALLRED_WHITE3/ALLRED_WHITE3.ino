const int red1 = 5;
const int red2 = 9;
const int red3 = 6;
const int red4 = 10;
const int white3 = 2;

void setup() {
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3, OUTPUT);  
  pinMode(red4, OUTPUT);
  pinMode(white3, OUTPUT);
}

void loop() {
  analogWrite(red1, 25);
  analogWrite(red2, 25);
  analogWrite(red3, 25);
  analogWrite(red4, 25);
  digitalWrite(white3, HIGH);
}
