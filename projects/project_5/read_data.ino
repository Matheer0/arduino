//Read Data that Has Been Sent to Arduino

// remember to choose "No Line Ending" option for Serial monitor

void setup() {
  Serial.begin(115200); 
  // 115200: board rate - speed for data transfer
  // larger number, higher rate

  
  // Timeout: time length waiting to read complete data before processing
  Serial.setTimeout(10); // change from default 1000ms to 10ms
}

void loop() {

  // read data that sent to Arduino from Serial
  if (Serial.available() > 0){
    // Serial.available() -> # of bytes ready to be read

    int var = Serial.parseInt(); // read int

    //        OTHER DATA TYPES
    // long var = Serial.parseInt();
    // double var = Serial.parseFloat();
    // String var = Serial.readString();

    Serial.println(var);
  }
	
}