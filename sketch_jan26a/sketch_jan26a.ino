int ledpin = 5;
int second = 1000;
int inputpin = A6;
int outputpin = 3;


void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
}

void loop() {
  //read value
  second = analogRead(inputpin);
  
  
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);
  delay(second);
  digitalWrite(ledpin, LOW);
  delay(second);
  
}
