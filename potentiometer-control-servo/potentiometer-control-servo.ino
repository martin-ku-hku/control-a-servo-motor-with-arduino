#include <Servo.h>

Servo myservo;

int pot_pin = A0;
int pot_val;

void setup() {
  myservo.attach(9);
}

void loop() {
  pot_val = analogRead(pot_pin);
  int angle = map(pot_val, 0, 1023, 0, 180);   
  myservo.write(angle);                
  delay(15); 
}
