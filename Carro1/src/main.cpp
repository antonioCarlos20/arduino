#include <Arduino.h>

#define motor1Vel 5
#define motor1In1 6
#define motor1In2 7
#define motor2Vel 9
#define motor2In1 10
#define motor2In2 11

void setup() {
  pinMode( motor1Vel, OUTPUT );
  pinMode( motor1In1, OUTPUT );
  pinMode( motor1In2, OUTPUT );
  pinMode( motor2Vel, OUTPUT );
  pinMode( motor2In1, OUTPUT );
  pinMode( motor2In2, OUTPUT );
}

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

void loop() {
  frente( 125 );
  delay( 2000 );
  freia( 0 );
  delay( 1000 );
  re( 125 );
  delay( 2000 );
  freia( 0 );
  delay( 1000 );
  esquerda( 125 );
  delay( 2000 );
  freia( 0 );
  delay( 1000 );
  direita( 125 );
  delay( 2000 );
  freia( 0 );
  delay( 1000 );
}