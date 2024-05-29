//Analog Input Pin:
//  Reads input voltage from analog sensor, like a potentiometer
//   and translates to integer from 0 (0% - 0V) to 1023 (100% - 5v) 

// NOTE: can only read (not write) analog values using Analog Input Pin
//   thus CANNOT use analogWrite function for Analog Input Pin
//    the function is used on digital pins with PWM functionality

// Analog pin can be used as DIGITAL pin (without PWM functionality), i.e. 
//   pinMode(pin_#, OUTPUT);
//   digitalWrite(pin_#, HIGH);

// In summary:
//   digitalWrite() - ok
//   analogWrite() - not possible (NO PWM functionality)

// Project 3 - Use Potentiometer to Power LED
#define POTENTIOMETER_PIN A2 // Analog Input Pin
#define LED_PIN 11

void setup() {
  // !! No need to set mode for Analog Input Pin, 
  //  since it's already in input mode by default
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // analogRead() gives value 0 to 1023
  Serial.println(analogRead(POTENTIOMETER_PIN)); 

  // power on the LED
  int brightness = int(analogRead(POTENTIOMETER_PIN)/1023 * 255);
  analogWrite(LED_PIN, brightness); 

}