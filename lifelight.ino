#include "pitches.h"

int melody[] = {
   // the notes are based on this transcription https://musescore.com/user/28262185/scores/5373206
   
   NOTE_d1, NOTE_e1, NOTE_f1, NOTE_d1, NOTE_f1, NOTE_c2,
   NOTE_h1, NOTE_a1, NOTE_h1, NOTE_g1,
   NOTE_b1, NOTE_a1, NOTE_g1, NOTE_f1, NOTE_g1, NOTE_a1,
   NOTE_g1, NOTE_f1, NOTE_g1, NOTE_e1,
   NOTE_d1, NOTE_e1, NOTE_f1, NOTE_d1, NOTE_f1, NOTE_c2,
   NOTE_h1, NOTE_a1, NOTE_h1, NOTE_d2,
   NOTE_b1, NOTE_a1, NOTE_g1, NOTE_f1, NOTE_g1, NOTE_a1,
   NOTE_g1, NOTE_f1, NOTE_g1, NOTE_e1, NOTE_g1, NOTE_c2,
   NOTE_d2, NOTE_g2,
   NOTE_f2, NOTE_e2,
   
   NOTE_d2, NOTE_a1, NOTE_c2,
   NOTE_d2, NOTE_e2, 0,
   NOTE_f1, NOTE_g1, NOTE_e1, NOTE_d1, NOTE_e1,
   NOTE_f1, NOTE_g1, NOTE_a1, NOTE_g1,
   NOTE_f1, NOTE_g1, NOTE_e1, NOTE_d1, NOTE_c1,
   NOTE_d1,
   NOTE_f1, NOTE_g1, NOTE_e1, NOTE_d1, NOTE_e1,
   NOTE_f1, NOTE_g1, NOTE_a1, NOTE_g1, NOTE_e1, NOTE_c1,
   NOTE_d1, NOTE_d1, NOTE_e1, NOTE_f1,
   NOTE_g1, NOTE_a1,
   
   NOTE_f1, NOTE_g1, NOTE_e1, NOTE_d1, NOTE_e1,
   NOTE_f1, NOTE_g1, NOTE_a1, NOTE_g1,
   NOTE_f1, NOTE_g1, NOTE_e1, NOTE_d1, NOTE_c1,
   NOTE_d1,
   NOTE_f1, NOTE_g1, NOTE_e1, NOTE_d1, NOTE_e1,
   NOTE_f1, NOTE_g1, NOTE_a1, NOTE_g1, NOTE_e1, NOTE_c1,
   NOTE_d1, NOTE_d1, NOTE_e1, NOTE_f1,
   NOTE_g1, NOTE_c2, NOTE_a1,
   NOTE_g2, NOTE_g2, NOTE_g2, NOTE_g2,
   NOTE_f2, NOTE_es2, NOTE_f2, NOTE_c2,
   
   NOTE_a2, NOTE_a2, NOTE_a2, NOTE_a2, NOTE_f2, NOTE_d2,
   NOTE_c2, NOTE_b1, NOTE_b1, NOTE_a1, NOTE_b1,
   NOTE_g1, NOTE_g2, NOTE_g2, NOTE_d2, NOTE_cis2,
   NOTE_cis2, NOTE_cis2, NOTE_e2, NOTE_b2, NOTE_a2, NOTE_g2,
   NOTE_g2, NOTE_g2, NOTE_fis2, NOTE_g2, NOTE_a2,
   NOTE_a2,
   NOTE_d1, NOTE_e1, NOTE_f1, NOTE_d1, NOTE_f1, NOTE_c2,
   NOTE_h1, NOTE_a1, NOTE_h1, NOTE_g1,
   NOTE_b1, NOTE_a1, NOTE_g1, NOTE_f1, NOTE_g1, NOTE_a1,
   NOTE_g1, NOTE_f1, NOTE_g1, NOTE_e1,
   
   NOTE_d1, NOTE_e1, NOTE_f1, NOTE_d1, NOTE_f1, NOTE_c2,
   NOTE_h1, NOTE_a1, NOTE_h1, NOTE_d2,
   NOTE_b1, NOTE_a1, NOTE_g1, NOTE_f1, NOTE_g1, NOTE_a1,
   NOTE_g1, NOTE_f1, NOTE_g1, NOTE_e1,
   NOTE_d1, NOTE_e1, NOTE_f1, NOTE_d1, NOTE_f1, NOTE_c2,
   NOTE_h1, NOTE_a1, NOTE_h1, NOTE_g1,
   NOTE_b1, NOTE_a1, NOTE_g1, NOTE_f1, NOTE_g1, NOTE_a1,
   NOTE_g1, NOTE_f1, NOTE_g1, NOTE_e1,
   NOTE_d1, NOTE_e1, NOTE_f1, NOTE_d1, NOTE_f1, NOTE_c2,
   NOTE_h1, NOTE_a1, NOTE_h1, NOTE_d2,

   NOTE_b1, NOTE_a1, NOTE_g1, NOTE_f1, NOTE_g1, NOTE_a1,
   NOTE_g1, NOTE_f1, NOTE_g1, NOTE_e1, NOTE_g1, NOTE_c2,
   NOTE_d2, NOTE_g2,
   NOTE_f2, NOTE_e2,
   NOTE_d2, NOTE_e2, NOTE_d2, NOTE_c2, NOTE_a1, NOTE_f1, NOTE_es1
  };
  
double Durations[] = {
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 3/16.0, 3/16.0, 1/8.0,
   1/2.0, 1/2.0,
   1/2.0, 1/2.0,
   
   3/8.0, 1/8.0, 1/2.0,
   3/8.0, 1/2.0, 1/8.0,
   1/4.0, 1/4.0, 3/8.0, 1/16.0, 1/16.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   1/4.0, 1/4.0, 3/16.0, 3/16.0, 1/8.0,
   1.0,
   1/4.0, 1/4.0, 3/8.0, 1/16.0, 1/16.0,
   3/16.0, 3/16.0, 1/8.0, 3/16.0, 3/16.0, 1/8.0,
   1/2.0, 3/16.0, 3/16.0, 1/8.0,
   1/2.0, 1/2.0,
   
   1/4.0, 1/4.0, 3/8.0, 1/16.0, 1/16.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   1/4.0, 1/4.0, 3/16.0, 3/16.0, 1/8.0,
   1.0,
   1/4.0, 1/4.0, 3/8.0, 1/16.0, 1/16.0,
   3/16.0, 3/16.0, 1/8.0, 3/16.0, 3/16.0, 1/8.0,
   1/2.0, 3/16.0, 3/16.0, 1/8.0,
   1/4.0, 1/4.0, 1/2.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,

   3/16.0, 3/16.0, 1/8.0, 3/16.0, 3/16.0, 1/8.0,
   1/4.0, 3/8.0, 1/8.0, 1/8.0, 1/8.0,
   3/8.0, 1/8.0, 1/4.0, 1/8.0, 1/8.0,
   1/4.0, 1/8.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   1/2.0, 1/8.0, 1/8.0, 1/8.0, 1/8.0,
   1.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,

   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,
   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 1/2.0,

   3/16.0, 3/16.0, 1/4.0, 1/8.0, 1/8.0, 1/8.0,
   3/16.0, 3/16.0, 1/8.0, 3/16.0, 3/16.0, 1/8.0,
   1/2.0, 1/2.0,
   1/2.0, 1/2.0,
   3/8.0, 1/8.0, 1/2.0,
   1/4.0, 1/4.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0, 1/4.0
  };

  int schalter;

void setup() {
    pinMode(13,INPUT);
}

void loop() {
    schalter = digitalRead(13);
  
    if (schalter == HIGH) {
        for (int i = 0; i < 246; i++) {

            int noteDuration = 1700 * Durations[i];
            tone(8, melody[i], noteDuration);
           
            delay(noteDuration * 1.10);
            noTone(8);

             //testing whether the Taster is pressed
            schalter = digitalRead(13);
            Serial.println(schalter);
            if (schalter == HIGH){
                delay(400);
                break;
            }
        }
    }
}
