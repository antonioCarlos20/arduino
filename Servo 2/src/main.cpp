#include <Arduino.h>
#include <Servo.h>

Servo myservo;

int pos = 700;

void setup() {
  myservo.attach( 9 );
}

void loop() {
  for( pos = 700; pos <= 2300; pos++){
    myservo.writeMicroseconds( pos );
    delay( 10 );
  }

  for( pos = 2300; pos >= 700; pos--){
    myservo.writeMicroseconds( pos );
    delay( 10 );
  }
}