#include <Arduino.h>
#include <Servo.h>

#define trig 3
#define echo 2

long duration;
int dist, distance;

void setup() {
  pinMode( trig, OUTPUT);
  pinMode( echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
}