#include <IRremote.h>
#include <IRremoteInt.h>

void setup() {
  Serial.begin(9600);
}

////////////////////////////////////
// DENON
////////////////////////////////////
#define   KEY_POWER                0x000000000000221C        #  Was: power-on
#define   KEY_POWER                0x000000000000211C        #  Was: power-off

void loop() {
  
}
