#include <Arduino.h>

#define trig 3
#define echo 2

long duration;
int dist;
int distance;

void setup() {
  pinMode( trig, OUTPUT );
  pinMode( echo, INPUT );

  Serial.begin( 9600 );
}

int mensureDistance(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite( trig, HIGH);

  duration = ( pulseIn( echo, HIGH ) / 2);
  dist = duration * 0.034;

  // Serial.println( "Distance:" );
  // Serial.print( distance );
  // Serial.println( "cm" );

  delay( 1000 );

  return dist;
}

void loop() {

  distance = mensureDistance();
  
  Serial.println( "Distance:" );
  Serial.print( distance );
  Serial.println( "cm" );



}