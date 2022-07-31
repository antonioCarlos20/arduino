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

void frente(){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In1, HIGH );
  digitalWrite( motor2In2, LOW );

  analogWrite( motor1Vel, 255 );
  analogWrite( motor2Vel, 255 );
}

void re(){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In1, LOW );
  digitalWrite( motor2In2, HIGH );

  analogWrite( motor1Vel, 255 );
  analogWrite( motor2Vel, 255 );
}

void esquerda(){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In1, HIGH );
  digitalWrite( motor2In2, LOW );

  analogWrite( motor1Vel, 255 );
  analogWrite( motor2Vel, 255 );
}

void direita(){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In1, LOW );
  digitalWrite( motor2In2, HIGH );

  analogWrite( motor1Vel, 255 );
  analogWrite( motor2Vel, 255 );
}

void freia(){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In1, LOW );
  digitalWrite( motor2In2, LOW );

  analogWrite( motor1Vel, 0 );
  analogWrite( motor2Vel, 0 );
}

void loop() {
  frente();
  delay( 2000 );
  freia();
  delay( 1000 );
  re();
  delay( 2000 );
  freia();
  delay( 1000 );
  esquerda();
  delay( 2000 );
  freia();
  delay( 1000 );
  direita();
  delay( 2000 );
  freia();
  delay( 1000 );
}