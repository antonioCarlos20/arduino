#include <Arduino.h>
#include <Servo.h>

#define trig 3
#define echo 2

long duration;
int dist, distance;

int mesureDistance(){
  digitalWrite( trig, LOW );
  delayMicroseconds( 10 );
  digitalWrite( trig, HIGH );

  duration = ( pulseIn( echo, HIGH ) / 2 );
  dist = duration * 0.034;

  return dist;
}

void rotate(){
  
}

void verifyDistance( int distance ){
  if( distance < 20 ){
    rotate();
  }
}

void setup() {
  pinMode( trig, OUTPUT);
  pinMode( echo, INPUT);
}

void loop() {
  distance = mesureDistance();

  verifyDistance( distance );
}