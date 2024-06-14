// 6.2  Avoid using delay()

unsigned long previous_time = millis();

void setup() {
  Serial.begin(115200);
  
}


void loop() {
  unsigned long time_now = millis();

  // print every 500 ms without using delay(500)
  // i.e.
  // Serial.println("Hello");
  // delay(500);
  if (time_now - previous_time > 500) {
    Serial.println("Hello");

    previous_time += 500;
    // don't take into account the small delay of performing print action
    // better than: previous_time = time_now;

  } 

  // Advantage of this approach:
  //  doesn't block the program with delay(), 
  //  thus multiple actions can be performed at the same time
  
}
