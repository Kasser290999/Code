int Led1 = 1;
int Led2 = 2;
int Led3 = 3;
const int Led4 = 4;
const int Led5 = 5;
const int Led6 = 6;
const int Led7 = 7;
const int Led8 = 8;
const int Led9 = 9;
const int Led10 = 10;
const int Led11 = 11;

void setup() {
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);
  pinMode(Led9, OUTPUT);
  pinMode(Led10, OUTPUT);
  pinMode(Led11, OUTPUT);


}
void Kim(int pin, int speed) {
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(pin, brightness);
    delay(speed);
  }
}
void Dight3() {
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
}
void Dight2() {
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
}
void Dight1() {
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
}

void loop() {
  int i = 200;
  digitalWrite(Led4, HIGH);
  delay(i);
  digitalWrite(Led5, HIGH);
  delay(i);
  digitalWrite(Led6, HIGH);
  delay(i);
  digitalWrite(Led7, HIGH);
  delay(i);
  digitalWrite(Led8, HIGH);
  delay(i);
  digitalWrite(Led9, HIGH);
  delay(i);
  digitalWrite(Led10, HIGH);
  delay(i);
  digitalWrite(Led11, HIGH);
  delay(i);
 analogWrite (Led1, 255); delay(5000);
  Kim(Led1, 2);
  analogWrite (Led2, 255); delay(5000);
  Kim(Led2, 2);
  analogWrite (Led3, 255); delay(5000);
  Kim(Led3, 2);
}
