/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Arduino on-board LED: 
  On the UNO, MEGA and ZERO it is attached to digital pin 13, on MKR1000 on pin 6. 
  LED_BUILTIN is set to the correct LED pin independent of board used.
  
  Technical Specs of Arduino boards at:
  https://www.arduino.cc/en/Main/Products

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
  
  This snippet was modified from code by S Fitzgerald, A Guadalupi & C Newman
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
