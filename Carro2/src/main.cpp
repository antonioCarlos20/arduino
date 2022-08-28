#include <Arduino.h>
#include <Servo.h>

#define motor1Vel 3
#define motor1In1 2
#define motor1In2 1
#define motor2Vel 11
#define motor2In3 13
#define motor2In4 12

#define pinServo 10
Servo myservo;

void frente( int vel){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In3, HIGH );
  digitalWrite( motor2In4, LOW );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void re( int vel){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In3, LOW );
  digitalWrite( motor2In4, HIGH );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void esquerda( int vel){
  digitalWrite( motor1In1, LOW );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In3, HIGH );
  digitalWrite( motor2In4, LOW );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void direita( int vel){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, LOW );
  digitalWrite( motor2In3, LOW );
  digitalWrite( motor2In4, HIGH );

  analogWrite( motor1Vel, vel );
  analogWrite( motor2Vel, vel );
}

void freia(){
  digitalWrite( motor1In1, HIGH );
  digitalWrite( motor1In2, HIGH );
  digitalWrite( motor2In3, HIGH );
  digitalWrite( motor2In4, HIGH );

  analogWrite( motor1Vel, 255 );
  analogWrite( motor2Vel, 255 );
}

void rotate(){
  myservo.write( 23 );
  delay( 500 );
  myservo.write( 158 );
  delay( 500 );
  myservo.write( 90 );
  delay( 500 );

}


void setup() {
  pinMode( motor1Vel, OUTPUT );
  pinMode( motor1In1, OUTPUT );
  pinMode( motor1In2, OUTPUT );
  pinMode( motor2Vel, OUTPUT );
  pinMode( motor2In3, OUTPUT );
  pinMode( motor2In4, OUTPUT );

  myservo.attach( pinServo );
  myservo.write( 90 );

  freia();

  rotate();
}

void loop() {
  frente( 125 );
  delay( 2000 );
  freia();
  delay( 1000 );
  re( 125 );
  delay( 2000 );
  freia();
  delay( 1000 );
  esquerda( 125 );
  delay( 2000 );
  freia();
  delay( 1000 );
  direita( 125 );
  delay( 2000 );
  freia();
  delay( 1000 );
}