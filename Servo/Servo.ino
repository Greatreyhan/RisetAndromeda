#define Motor 3
void setup() {
  // put your setup code here, to run once:
  pinMode(Motor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    analogWrite(Motor, 255);
}
