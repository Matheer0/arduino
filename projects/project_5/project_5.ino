// Project 5 - Set LED Blink Rate from Serial Monitor

#define LED_PIN 12

int blink_delay = 500;
int led_state = LOW;

void setup() {
  Serial.begin(115200); 
  Serial.setTimeout(10); 

  pinMode(LED_PIN, OUTPUT);
}


void loop() {
  if (Serial.available() > 0){
    int data = Serial.parseInt(); 

    if (100 <= data && data <= 1000){
      blink_delay = data;
    }

  }

  if (led_state == LOW){
    led_state = HIGH;
  } else {
    led_state = LOW;
  }

  digitalWrite(LED_PIN, led_state);
  delay(blink_delay);
	
}

//Timing Problem:
//  when blink_delay is very large (i.e. 4000ms), 
//  delay(blink_delay) will pause the program very long causing
//  blink_delay won't be updated until the end of delay.

//  Thus, unable to read the data as soon as it arrives
//  i.e. Arduino is single threading

//  will solve this in next project
