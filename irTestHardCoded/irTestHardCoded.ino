#include <IRremote.h>
#include <IRremoteInt.h>

void setup() {
  Serial.begin(9600);
}

////////////////////////////////////
// DENON sendDenon
////////////////////////////////////
#define   DENON_KEY_POWER                0x000000000000221C        //  Was: power-on
#define   DENON_KEY_POWER                0x000000000000211C        //  Was: power-off
#define   DENON_KEY_MUTE                 0x000000000000203C        //  Was: mute

///////////////////////////////////
// VIZIO sendNEC/sendNEC(REPEAT,0)
///////////////////////////////////
#define VIZIO_KEY_VOL_DOWN  0x20DFC03F
#define VIZIO_MENU          0x20DFF20D
#define VIZIO_EXIT          0x20DF926D
#define VIZIO_UP            0x20DFA25D
#define VIZIO_DOWN          0x20DF629D
#define VIZIO_RIGHT         0x20DF12ED
#define VIZIO_LEFT          0x20DFE21D
#define VIZIO_OK            0x20DF22DD
#define VIZIO_BACK          0x20DF52AD
#define VIZIO_GUIDE         0x20DF38C7
#define VIZIO_INFO          0x20DFD827
#define VIZIO_CHANNEL_UP    0x20DF00FF
#define VIZIO_CHANNEL_DOWN  0x20DF807F
#define VIZIO_ZERO          0x20DF08F7
#define VIZIO_ONE           0x20DF8877
#define VIZIO_TWO           0x20DF48B7
#define VIZIO_THREE         0x20DFC837
#define VIZIO_FOUR          0x20DF28D7
#define VIZIO_FIVE          0x20DFA857
#define VIZIO_SIX           0x20DF6897
#define VIZIO_SEVEN         0x20DFE817
#define VIZIO_EIGHT         0x20DF18E7
#define VIZIO_NINE          0x20DF9867
#define VIZIO_DASH          0x20DFFF00
#define VIZIO_WIDE          0x20DFEE11


//////////////////////////////////////
//  ROKU sendNEC (32bits)
//////////////////////////////////////
#define ROKU_HOME            0x5743C03F
#define ROKU_LEFT            0x57437887
#define ROKU_RIGHT           0x5743B44B
#define ROKU_UP              0x57439867
#define ROKU_DOWN            0x5743CC33
#define ROKU_PAUSE           0x574332CD
#define ROKU_STAR            0x57438679
#define ROKU_OKAY            0x574354AB
#define ROKU_BACK            0x57436699
#define ROKU_FASTFORWARD     0x5743AA55
#define ROKU_REWIND          0x57432CD3
#define ROKU_REPLAY          0x57431EE1

IRsend irsend;

void loop() {
//  irsend.sendDenon(KEY_MUTE, DENON_BITS);
//  irsend.sendNEC(VIZIO_MENU, 32);
//  irsend.sendNEC(REPEAT,0);
//  delay(3000);
//  irsend.sendNEC(VIZIO_EXIT, 32);
//  irsend.sendNEC(REPEAT,0);
//  delay(5000);
  irsend.sendNEC(ROKU_PAUSE, 32);
  delay(5000);
  irsend.sendNEC(ROKU_PAUSE, 32);
  delay(10000);
}
