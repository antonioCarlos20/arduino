#include <Arduino.h>

#define motorVel 5
#define motorIn1 6
#define motorIn2 7

void setup() {
  pinMode( motorVel, OUTPUT );
  pinMode( motorIn1, OUTPUT );
  pinMode( motorIn2, OUTPUT );
}

void loop() {
  digitalWrite( motorIn1, HIGH );
  digitalWrite( motorIn2, LOW );

  for( int vel = 0; vel <= 50; vel++ ){
    analogWrite( motorVel, vel );
    delay( 10 );
  }

  delay( 2000 ); //Motor gira no sentido horário até a vélocidade máxima por 2s

  digitalWrite( motorIn1, LOW );
  digitalWrite( motorIn2, HIGH );

  for( int vel = 50; vel >= 0; vel-- ){
    analogWrite( motorVel, vel );
    delay( 100 );
  }

  delay( 2000 ); //Motor gira no sentido anti-horário até a vélocidade mínnima por 2s
}