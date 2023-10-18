// change this to make the song slower or faster
int tempo = 160;

// notes of the moledy followed by the duration.
// a 4 means a quarter note, 8 an eighteenth , 16 sixteenth, so on
// !!negative numbers are used to represent dotted notes,
// so -4 means a dotted quarter note, that is, a quarter plus an eighteenth!!
int melody[] = {
  
    NOTE_D5, 8, NOTE_CS5, 8, NOTE_B4, 8, NOTE_A4, 8,
    NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_CS5, 8,
    NOTE_B4, 8, NOTE_A4, 8, NOTE_B4, 8, NOTE_CS5, 8,
    NOTE_D5, 8, NOTE_CS5, 8, NOTE_B4, 8, NOTE_A4, 8,
    NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_CS5, 8,
    NOTE_B4, 8, NOTE_A4, 8, REST, 8, REST, 8,NOTE_E5, 8,
    NOTE_D5, 8, NOTE_CS5, 8, NOTE_B4, 8, NOTE_CS5, 8,
    NOTE_D5, 8, NOTE_E5, 8, NOTE_D5, 8, NOTE_CS5, 8,
    NOTE_B4, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_E5, 8,
    NOTE_D5, 8, NOTE_CS5, 8, NOTE_B4, 8, NOTE_CS5, 8,
    NOTE_D5, 8, NOTE_CS5, 8, NOTE_D5, 8, NOTE_DS5, 8,
    NOTE_E5, 8, REST, 8, REST, 8, NOTE_B5, 8, NOTE_CS6, 8,
    NOTE_D6, 8, NOTE_G5, 8, NOTE_A5, 8, NOTE_B5, 8,
    NOTE_A5, 8, NOTE_B5, 8, NOTE_CS6, 8, NOTE_FS5, 8,
    NOTE_G5, 8, NOTE_A5, 8, NOTE_G5, 8, NOTE_A5, 8,
    NOTE_B5, 8, NOTE_E5, 8, NOTE_FS5, 8, NOTE_G5, 8,
    NOTE_FS5, 8, NOTE_G5, 8, NOTE_A5, 8, NOTE_D5, 8,
    NOTE_E5, 8, NOTE_FS5, 8, NOTE_E5, 8,
    NOTE_DS5, 8, NOTE_D5, 8, NOTE_CS5, 8, NOTE_C5, 8,
    NOTE_B4, 8, NOTE_AS4, 8, NOTE_A4, 8, NOTE_GS4, 8,
    NOTE_G4, 8, NOTE_FS4, 8, NOTE_F4, 8, NOTE_E4, 8,

    REST, 4,

    NOTE_A3, 4, NOTE_D4, 8, NOTE_D4, 4, NOTE_FS4, 8,
    NOTE_B4, 4, NOTE_FS4, 8, NOTE_A4, 4, REST, 8,
    NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_FS4, 8,
    NOTE_G4, 4, NOTE_FS4, 8, NOTE_E4, 4, REST, 8,
    NOTE_B3, 4,
    NOTE_E4, 8, NOTE_E4, 4,
    NOTE_G4, 8, NOTE_CS5, 4,
    NOTE_CS5, 8, NOTE_B4, 4,
    NOTE_A4, 8,
    NOTE_G4, -4,
    NOTE_G4, 4,
    NOTE_FS4, 8, NOTE_B3, 4,
    NOTE_CS4, 4, NOTE_D4, 4, NOTE_E4, 4,


    REST, 4,

    NOTE_A3, 4, NOTE_D4, 8, NOTE_D4, 4, NOTE_FS4, 8,
    NOTE_B4, 4, NOTE_FS4, 8, NOTE_A4, 4, REST, 8,
    NOTE_A4, 4, NOTE_B4, 8, NOTE_A4, 4, NOTE_FS4, 8,
    NOTE_G4, 4, NOTE_FS4, 8, NOTE_E4, 4, REST, 8,
    NOTE_B3, 4,
    NOTE_E4, 8, NOTE_E4, 4,
    NOTE_G4, 8, NOTE_CS5, 4,
    NOTE_CS5, 8, NOTE_B4, 4,
    NOTE_A4, 8,
    NOTE_G4, -4,
    NOTE_G4, 4,
    NOTE_FS4, 8, NOTE_E4, 8,
    NOTE_CS4, 4, NOTE_E4, 4, NOTE_D4, 4,
    REST, 4,

    
    NOTE_B4, 4, REST, 8, NOTE_B4, 4, NOTE_A4, 8, NOTE_G4, 8, 
    NOTE_A4, 8, NOTE_B4, 8, NOTE_A4, 8, REST, 4, NOTE_E4, 4, 
    NOTE_FS4, 8, NOTE_GS4, 4, NOTE_E4, 8, NOTE_A4, 4, 
    REST, 2,
  
    NOTE_B4, 4, REST, 8,
    NOTE_A4, 4, REST, 8,
    NOTE_G4, 4, REST, 2, 
    NOTE_E4, 4, NOTE_E4, 8, NOTE_CS5, 8, REST, 8,
    NOTE_B4, 8, NOTE_A4, 8, REST, 8,
    NOTE_B4, 8, NOTE_A4, 8, REST, 8,
    NOTE_G4, 8, REST, -4,
  
    NOTE_A4, 8, REST, 8, NOTE_B4, 8, NOTE_FS4, 2, 
    NOTE_E4, 8, NOTE_D4, 2, 


};
