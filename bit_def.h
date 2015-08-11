// bit_def.h

typedef unsigned char bit;        // simulates a single bit, we'll use the low order bit in a byte

#ifndef BIT0_MASK
#define BIT0_MASK 0x01
#endif

#ifndef TRUE 
#define TRUE 1
#define FALSE 0
#endif

bit maskBit(bit);    // used to ensure only bit 0 has a non-zero value