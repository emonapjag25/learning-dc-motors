#define ENABLE 5 //pin that the motor to turn on with intensity
#define DIRECTIONA 3
#define DIRECTIONB 4

void setup() {
  pinMode (ENABLE, OUTPUT);
  pinMode (DIRECTIONA, OUTPUT);
  pinMode (DIRECTIONB, OUTPUT);
}

void loop() {
  digitalWrite(ENABLE, HIGH);
  //digitalWrite(ENABLE, 50);
  
  digitalWrite(DIRECTIONB, HIGH);
  digitalWrite(DIRECTIONA, LOW);
  delay(2000);
  digitalWrite(DIRECTIONA, HIGH);
  digitalWrite(DIRECTIONB, LOW);
  delay(2000);
}
