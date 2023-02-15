int LEDbread ;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDbread,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDbread,HIGH);
  delay(200);
  digitalWrite(LEDbread,LOW);
  delay(1800);
}
