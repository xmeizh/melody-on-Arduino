#include "pitches.h"

int melody[] = {
   // the notes are based on this transcription https://musescore.com/user/81676/scores/109350
   
   NOTE_E, NOTE_A1, NOTE_H1, NOTE_Cis, NOTE_Dis, NOTE_E, NOTE_Fis, NOTE_Gis, NOTE_A, NOTE_H,
   NOTE_cis, NOTE_dis, NOTE_e, NOTE_fis, NOTE_gis, NOTE_A, NOTE_H, NOTE_cis, NOTE_dis, NOTE_e,
   NOTE_fis, NOTE_gis, NOTE_a, NOTE_h, NOTE_cis1, NOTE_dis1, NOTE_e1, NOTE_fis1, NOTE_gis1, NOTE_a1,
   NOTE_h1, NOTE_cis2, NOTE_dis2, NOTE_e2, NOTE_fis2, NOTE_gis2, NOTE_a2,

   NOTE_h2, NOTE_e2, NOTE_e2, NOTE_e2, NOTE_e2, NOTE_cis2, NOTE_h1, NOTE_a1,

   NOTE_gis1, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3, NOTE_gis3,
   NOTE_e3, NOTE_cis3, NOTE_gis2, 0, NOTE_fis1, NOTE_gis1, NOTE_a1, NOTE_h1,

   NOTE_gis1, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3, NOTE_gis3,
   NOTE_e3, NOTE_cis3, NOTE_gis2, 0, NOTE_gis1, NOTE_fis1, NOTE_gis1, NOTE_a1, NOTE_h1,

   NOTE_gis1, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3, NOTE_gis3,
   NOTE_e3, NOTE_cis3, NOTE_gis2, NOTE_dis1, NOTE_e1, NOTE_fis1, NOTE_e1, NOTE_dis1,

   NOTE_cis1, NOTE_gis1, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3,
   NOTE_gis3, NOTE_e3, NOTE_cis3, NOTE_gis2, 0, NOTE_cis3, NOTE_h2, NOTE_a2,

   NOTE_gis2, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3, NOTE_gis3,
   NOTE_e3, NOTE_cis3, NOTE_gis2, 0, NOTE_fis2, NOTE_gis2, NOTE_a2, NOTE_h2,

   NOTE_gis2, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3, NOTE_gis3,
   NOTE_e3, NOTE_cis3, NOTE_gis2, 0, NOTE_gis2, NOTE_fis2, NOTE_gis2, NOTE_a2, NOTE_h2,

   NOTE_gis2, NOTE_e2, NOTE_cis1, NOTE_e2, NOTE_gis2, NOTE_cis3, NOTE_gis2, NOTE_cis3, NOTE_e3, NOTE_fis3,
   NOTE_cis3, NOTE_a2, NOTE_fis2, NOTE_dis3, NOTE_e3, NOTE_fis3, NOTE_e3, NOTE_dis3,

   NOTE_e3, NOTE_cis3, NOTE_gis3, NOTE_fis3, NOTE_e3
  };
  
double Durations[] = {
   4/9.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0,
   1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0,
   1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0,
   1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0, 1/64.0,   
   1/8.0, 1/24.0, 1/24.0, 1/24.0, 1/2.0, 1/8.0, 1/16.0, 1/16.0,
   1/4.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0,
   1/8.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0, 
   1/4.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0,
   1/16.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0,
   1/4.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0,
   1/16.0, 1/16.0, 1/8.0, 1/16.0, 1/16.0,
   1/8.0, 1/8.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 
   1/8.0, 1/8.0, 1/16.0, 1/16.0,
   1/4.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0,
   1/8.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0,
   1/4.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 
   1/16.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0, 1/16.0,
   1/4.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0, 1/32.0,
   1/16.0, 1/16.0, 1/8.0, 1/16.0, 1/16.0,
   1/8.0, 3/8.0, 1/8.0, 1/8.0, 1/4.0   
  };

  int schalter;

void setup() {
    pinMode(13,INPUT);
}

void loop() {
    schalter = digitalRead(13);
  
    if (schalter == HIGH) {
        int i = 0;
        while (i < 178) {

          int noteDuration = 3200 * Durations[i];
          tone(8, melody[i], noteDuration);
           
          delay(noteDuration * 1.10);
          noTone(8);
          i++;

          // testing whether the Taster is pressed
          schalter = digitalRead(13);
          if (schalter == HIGH){
              delay(400);
              break;
            }
         }
    }
}
