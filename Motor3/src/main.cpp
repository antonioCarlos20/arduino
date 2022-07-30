#include <Arduino.h>

#define motor 3

void setup() {
  pinMode( motor, OUTPUT );
}

void loop() {
  analogWrite( motor, 70 );
  delay( 1000 );
  analogWrite( motor, 0 );
  delay( 1000 );
  analogWrite( motor, 255 );
  delay( 1000 );
}