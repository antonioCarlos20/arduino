#include <Arduino.h>

#define motorVel 5
#define motorIn1 6
#define motorIn2 7

void setup() {
  pinMode( motorVel, OUTPUT );
  pinMode( motorIn1, OUTPUT );
  pinMode( motorIn2, OUTPUT );
}

void loop() {
  digitalWrite( motorIn1, HIGH );
  digitalWrite( motorIn2, LOW );
  analogWrite( motorVel, 25 );
}