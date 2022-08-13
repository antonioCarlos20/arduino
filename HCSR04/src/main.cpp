#include <Arduino.h>

#define trig 3
#define echo 2

long duration;
int distance;

void setup() {
  pinMode( trig, OUTPUT );
  pinMode( echo, INPUT );

  Serial.begin( 9600 );
}

void loop() {

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite( trig, HIGH);

  duration = ( pulseIn( echo, HIGH ) / 2);
  distance = duration * 0.034;

  Serial.println( "Distance:" );
  Serial.print( distance );
  Serial.println( "cm" );

  delay( 1000 );
}