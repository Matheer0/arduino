//5V Power Pin connect to Push Button connect to Digital Pin -> generate input
//  PRESSED: HIGH (5v)
//  NOT PRESSED: LOW (0v)

// Project 2 - Press Button
#define BUTTON_PIN 2 // digital pin that connected to the press button 
#define LED_PIN 7

void setup() {
  pinMode(BUTTON_PIN, INPUT); // set to INPUT mode
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if (digitalRead(BUTTON_PIN) == HIGH){
    Serial.println("Button is pressed."); 
    digitalWrite(LED_PIN, HIGH); // power on the LED
  } else{
    Serial.println("Button is not pressed.");
    digitalWrite(LED_PIN, LOW);
  }
  delay(100);

}