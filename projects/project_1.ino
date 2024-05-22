//DIGITAL PINS
//  can be set to INPUT/OUTPUT mode
//    OUTPUT: can set to HIGH (5v)/LOW (0v) state, i.e LED ON/OFF

//  some has PWM (Pulse Width Modulation) function, i.e. pin number with ~
//    fractional HIGH signal, percentage represented by an int from 0 to 255 
//      25% duty cycle = 25% * 255 -> 1.25v


// Project 1 - LED fade in & out
#define LED_PIN 11
  
void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  
  // LED fade in
  for(int i = 0; i<256; i++){
    analogWrite(LED_PIN, i); // function to write to PWM digital pin
    delay(5);
  }
  
  // LED fade out
  for(int i = 255; i>-1; i--){
    analogWrite(LED_PIN, i);
    delay(5);
  }
}