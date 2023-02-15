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
  int i=0;

  if(buttonstate==LOW){
    i=i+1;
    if( (i%2) == 0){
      digitalWrite(LEDbread,HIGH);
    }
    else{
      digitalWrite(LEDbread,LOW);
    }
  }
}
