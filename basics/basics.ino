// C++ code
//
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // set pin 13 to OUTPUT mode
  Serial.begin(9600); // serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Led on");
  digitalWrite(13, HIGH);
  delay(2000);
  
  Serial.println("Led off");
  digitalWrite(13, LOW);
  delay(1000);
}
