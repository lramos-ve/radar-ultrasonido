#include <Servo.h>

Servo myservo;

void setup() {
  myservo.attach(12);
  //myservo.write(97);
}

void loop() {
  for (int i=30; i<=165; i++) {
    myservo.write(i);
    delay(30);
  }

  for (int i=165; i>=30; i--) {
    myservo.write(i);
    delay(30);
  }
}