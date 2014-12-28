#include <IRremote.h>
#include <IRremoteInt.h>

void setup() {
  Serial.begin(9600);
}

////////////////////////////////////
// DENON
////////////////////////////////////
#define   KEY_POWER                0x000000000000221C        //  Was: power-on
#define   KEY_POWER                0x000000000000211C        //  Was: power-off
#define   KEY_MUTE                 0x000000000000203C        //  Was: mute

IRsend irsend;

void loop() {
  irsend.sendDenon(KEY_MUTE, 15);
  delay(10000);
}
