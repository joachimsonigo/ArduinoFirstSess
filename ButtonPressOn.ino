int LEDbread = 7;
int butt = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDbread,OUTPUT);
  pinMode(butt,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonstate =digitalRead(butt);
  if(buttonstate==LOW)
    digitalWrite(LEDbread,HIGH);
  else
    digitalWrite(LEDbread,LOW);
}
