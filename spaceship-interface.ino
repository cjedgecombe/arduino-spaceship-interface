// store the switch state
int switchState = 0;

// setup runs once, when the Arduino is first powered on
void setup() {
  // declare the mode of all the relevant pins
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);

}

// loop runs continuously after setup
void loop() {
  // check the state of the input pin. if there's voltage on the pin, switchState will be assigned HIGH(1) or LOW(0)
  switchState = digitalRead(2);

  // if button is not pressed
  if (switchState == LOW) {
    // send 5v to the green LED (on pin 3)
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

  // if button is pressed
  } else {
    // turn off green LED and turn on one red LED
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    // wait 250ms
    delay(250);

    // switch the red LED's
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    // wait 250ms
    delay(250);
  }
}