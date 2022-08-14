#include <Arduino.h>

#define motor1Vel 5
#define motor1In1 6
#define motor1In2 7
#define motor2Vel 9
#define motor2In1 10
#define motor2In2 11

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

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}