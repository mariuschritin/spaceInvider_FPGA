#include "prjOled.h"

// definitions of different commands

extern char BufferTable[12] = {
 0xff,
 0xCF,
 0x00,
 0x0A,
 0x00,
 0x14,
 0x00,
 0x5A,
 0x00,
 0x3C,
 0xF8,
 0x11
};
// rayon : 6
extern char BufferTableCircle[12] = {
 0xFF,
 0xCC,
 0x00,
 0x07,
 0x00,
 0x78,
 0x00,
 0x06,
 0x84,
 0x10
};
extern char BufferTableCircleBlack[12] = {
 0xFF,
 0xCC,
 0x00,
 0x07,
 0x00,
 0x78,
 0x00,
 0x06,
 0x00,
 0x00
};

extern char blackRectangle[12] = {
 0xFF,
 0xCE,
 0x00,
 0x00,
 0x00,
 0x00,
 0x00,
 0x7F,
 0x00,
 0x7F,
 0x00,
 0x00
};

extern char printChar[] = {
   0xFF, 0xFE, 0x00, 0x39
};

extern char moveOrigin[] = {
   //0xFF, 0xE4, 0x00, 0x01, 0x00, 0x01
   0xFF, 0xD6, 0x00, 0x0F, 0x00, 0x3F
};





extern char clearScreen[] = {
 0xFF,
 0xD7
};
extern char setBaudRate[] = {
 0x00,
 0x0B,
 0x00,
 0x19
};
extern char Triangle[] = {
 0xFF, 0xC9, 0x00, 0x28, 0x00, 0x28, 0x00, 0x2A, 0x00, 0x2B, 0x00, 0x25, 0x00, 0x2B, 0x07,
0xFF
};




extern      char Rond[12] = {
        0xFF,
        0xCD,
        0x00,
        0x20,
        0x00,
        0x75,
        0x00,
        0x06,
        0x00,
        0x00
      };
   extern   char RondClear[12] = {
        0xFF,
        0xCC,
        0x00,
        0x20,
        0x00,
        0x75,
        0x00,
        0x06,
        0x00,
        0x00
      };
   extern   char RondHaut[12] = {
        0xFF,
        0xCC,
        0x00,
        0x1E,
        0x00,
        0x0A,
        0x00,
        0x06,
        0x84,
        0x10
      };
    extern  char RondBas[12] = {
        0xFF,
        0xCC,
        0x00,
        0x20,
        0x00,
        0x75,
        0x00,
        0x06,
        0x84,
        0x10
      };
   extern   char RondBasDecale[12] = {
        0xFF,
        0xCC,
        0x00,
        0x35,
        0x00,
        0x75,
        0x00,
        0x06,
        0x84,
        0x10
      };
     extern char RondBasCentre[12] = {
        0xFF,
        0xCC,
        0x00,
        0x40,
        0x00,
        0x75,
        0x00,
        0x06,
        0x84,
        0x10
      };


