int LEDbread = 7;
int butt = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDbread,OUTPUT);
  pinMode(butt,INPUT_PULLUP);
}

void loop() {
  static bool buttonPressed = false; // Keep track of the button state

  int buttonState = digitalRead(butt);

  if (buttonState == LOW && !buttonPressed) {
    delay(50); // Debounce the button by waiting for 50 milliseconds
    if (digitalRead(butt) == LOW) { // Check if the button is still pressed after debounce
      buttonPressed = true; // Set the button state to pressed
    }
  } else if (buttonState == HIGH && buttonPressed) {
    delay(50); // Debounce the button by waiting for 50 milliseconds
    if (digitalRead(butt) == HIGH) { // Check if the button is still released after debounce
      buttonPressed = false; // Set the button state to released
      digitalWrite(LEDbread, !digitalRead(LEDbread)); // Invert the current state of the LED
    }
  }
}
