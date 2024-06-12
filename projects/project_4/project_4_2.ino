//Project 4.2 - Blink LEDs when Press Button is not Pressed

  //When button is not pressed:
    //Red and Green power on, Yellow off
    // 300ms
    //Red and Green power off, Yellow on
    // 300ms

  //When button is pressed: 
    //we do nothing (keep current states of all LEDs unchanged)

#define RED_LED_PIN 12
#define YELLOW_LED_PIN 11
#define GREEN_LED_PIN 10

#define BUTTON_PIN 2

int LED_BINK_STATE = 1;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
  
  //initialize all states of all pins to LOW
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW){
    if (LED_BINK_STATE == 1){
      digitalWrite(RED_LED_PIN, HIGH);
      digitalWrite(YELLOW_LED_PIN, LOW);
      digitalWrite(GREEN_LED_PIN, HIGH);
      LED_BINK_STATE = 2;
    } else {
      digitalWrite(RED_LED_PIN, LOW);
      digitalWrite(YELLOW_LED_PIN, HIGH);
      digitalWrite(GREEN_LED_PIN, LOW);
      LED_BINK_STATE = 1;
    }
    delay(300);
  }
	
}