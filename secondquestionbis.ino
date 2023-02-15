#define led 13 //PB5
#define PB 4  //PD4

void setup() {
  pinMode(led,OUTPUT);  //DDRB |=(1<<5);
  pinMode(PB,INPUT_PULLUP); //DDRD &=~(1<<4);
  //PORTD |=(1<<4); to activate the internal resistance
}

void loop() {
int state=digitalRead(PB); //int state =(PIND&(1<<4));
if(state == HIGH){      //if(state){
  digitalWrite(led,HIGH);  //PORTB |=(1<<5);
}
  else{
  digitalWrite(led,LOW);  //PORTB &=~(1<<5);
  }
}
