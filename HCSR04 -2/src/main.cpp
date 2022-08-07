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

int mesureDistance(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite( trig, HIGH);

  duration = ( pulseIn( echo, HIGH ) / 2);
  dist = duration * 0.034;

  delay( 1000 );

  return dist;
}

void loop() {

  distance = mesureDistance();

  Serial.println( "Distance:" );
  Serial.print( distance );
  Serial.println( "cm" );

  
  if( distance < 20 ){
    Serial.println( "para() ");
  }else{
    Serial.println( "fente() ");
  }

}