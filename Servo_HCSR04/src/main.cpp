#include <Arduino.h>
#include <Servo.h>

#define trig 3
#define echo 2

long duration;
int dist, distance;

Servo myservo;

int mesureDistance(){
  digitalWrite( trig, LOW );
  delayMicroseconds( 10 );
  digitalWrite( trig, HIGH );
  delayMicroseconds( 10 );
  digitalWrite( trig, LOW );

  duration = ( pulseIn( echo, HIGH ) / 2 );
  dist = duration * 0.034;

  return dist;
}

void rotate(){
  myservo.write( 135 );
  delay( 1000 );
  myservo.write( 45 );
  delay( 1000 );
  myservo.write( 90 );
}

void verifyDistance( int distance ){
  if( distance < 20 ){
    rotate();
  }
}

void setup() {
  pinMode( trig, OUTPUT);
  pinMode( echo, INPUT);

  myservo.attach( 9 );
  myservo.write( 90 );
}

void loop() {
  delay( 1000 );
  distance = mesureDistance();

  verifyDistance( distance );
}