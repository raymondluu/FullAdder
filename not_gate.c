// not_gate.c simulates a bitwise not

#include <stdio.h>
#include "bit_def.h"

bit not(bit a) {
    bit r;

    a = maskBit(a);    // make sure no spurious bits get by!
    r = ~a & 0x01;

    return r;
}

// test driver code for NOT. This can be expanded to complete this assignment
// Remember to comment this section out when compiling to an object file.
/*int main(void) {
    bit a;
    a = 0x01;

    printf("NOT %d = %d\n",a, not(a));
}*/