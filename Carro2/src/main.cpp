#include <Arduino.h>
#include <Servo.h>

#define motor1Vel 5
#define motor1In1 6
#define motor1In2 7
#define motor2Vel 9
#define motor2In1 10
#define motor2In2 11

#define trig 3
#define echo 2

long duration;
int dist, distance, distEsq, distDir, distFrente;

Servo myservo;

void frente( int vel){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In1, HIGH );
  digitalWrite( motor2In2, LOW );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void re( int vel){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In1, LOW );
  digitalWrite( motor2In2, HIGH );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void esquerda( int vel){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In1, HIGH );
  digitalWrite( motor2In2, LOW );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void direita( int vel){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In1, LOW );
  digitalWrite( motor2In2, HIGH );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void freia( int vel){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In1, LOW );
  digitalWrite( motor2In2, LOW );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

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

void find(){
  myservo.write( 135 );
  delayMicroseconds( 20 );

  delay( 1000 );
  myservo.write( 45 );
  delay( 1000 );
  myservo.write( 90 );
}

void setup() {
  pinMode( motor1Vel, OUTPUT );
  pinMode( motor1In1, OUTPUT );
  pinMode( motor1In2, OUTPUT );
  pinMode( motor2Vel, OUTPUT );
  pinMode( motor2In1, OUTPUT );
  pinMode( motor2In2, OUTPUT );

  pinMode( trig, OUTPUT);
  pinMode( echo, INPUT);
  myservo.attach( 9 );
  myservo.write( 90 );

  freia( 0 );
}

void loop() {
  // put your main code here, to run repeatedly:
}