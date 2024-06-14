// 6.1 Time Functionality

//Delay program execution:
//  delay() - in milliseconds
//  delayMicroseconds()

void setup() {
  
  // unsigned: all numbers will be positive
  //             long -> -2 Billion to +2 Billion
  //    unsigned long -> 0 to +4 Billion

  // millis() gives current time since start of the program in ms
  // micros() gives in micro seconds
  unsigned long time_now =  millis();



  // compute duration of an action 
  unsigned long time_begin =  micros();
  delay(500);
  unsigned long time_end =  micros();
  unsigned long duration = time_end - time_begin;
  
}


void loop() {
  
	
}
