#include <Arduino.h>

#define motor 3
int vel = 0;

void setup() {
  pinMode( motor, OUTPUT );
}

void loop() {
  for( vel = 0; vel <= 255; vel++ ){
    analogWrite( motor, vel );
    delay( 100 );
  };

  for( vel = 255; vel >= 0; vel-- ){
    analogWrite( motor, vel );
    delay( 100 );
  };
}