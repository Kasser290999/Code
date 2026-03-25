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


void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
 


}
void Kim(int pin, int speed) {
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(pin, brightness);
    delay(speed);
  }
}
void Dight3() {
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
   digitalWrite(10, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
}
void Dight2() {
  digitalWrite(10, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
}
void Dight1() {
  digitalWrite(10, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW );
  digitalWrite(7, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  
}


void loop() {
  analogWrite (Led1, 255); delay(5000);
  Kim(Led1, 2);
  
   Dight3(); 
  delay(500);

  Dight2(); 
  delay(500);

  Dight1(); 
  delay(500);
  
  analogWrite (Led2, 255); delay(5000);
  Kim(Led2, 2);
  
  analogWrite (Led3, 255); delay(5000);
  Kim(Led3, 2);
  

  


     
  
 

}
