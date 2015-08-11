// and_gate.c simulates a bitwise and

#include <stdio.h>
#include "bit_def.h"

bit and(bit a, bit b) {
    bit r;

    a = maskBit(a);    // make sure no spurious bits get by!
    b = maskBit(b);
    r = a & b & 0x01;

    return r;
}

// test driver code for AND. This can be expanded to complete this assignment
// Remember to comment this section out when compiling to an object file.
/*int main(void) {
    bit a;
    a = 0x01;
    bit b;
    b = 0x00;

    printf("%d AND %d = %d\n",a, b, and(a, b));
}*/