#include "bit_def.h"

//Code provided by Professor Mobus
#define SIGN_MASK 0x00008000 /* mask = 00000000000000001000000000000000 */
                             /*                        ^
                             /* bit 15 ----------------+
                             /* tests the sign bit of a 16 bit number   */
#define LOB_MASK 0x0000ffff
#define BIT_0_MASK (short)0x0001
#define BIT_0_MASK_REG 0x00000001
#define BIT_1_MASK_REG 0x00000002
#define BIT_2_MASK_REG 0x00000004
#define BIT_3_MASK_REG 0x00000008
#define BIT_4_MASK_REG 0x00000010
#define BIT_5_MASK_REG 0x00000020
#define BIT_6_MASK_REG 0x00000040
#define BIT_7_MASK_REG 0x00000080
#define BIT_8_MASK_REG 0x00000100
#define BIT_9_MASK_REG 0x00000200
#define BIT_A_MASK_REG 0x00000400
#define BIT_B_MASK_REG 0x00000800
#define BIT_C_MASK_REG 0x00001000
#define BIT_D_MASK_REG 0x00002000
#define BIT_E_MASK_REG 0x00004000
#define BIT_F_MASK_REG 0x00008000

typedef unsigned short Register;

typedef struct {
	bit a;
	bit b;
	bit c_in;
	bit r;
	bit c_out;
} FullAdder;

typedef FullAdder * FullAdderPtr;

// prototype -
bit fullAdder (bit a, bit b, bit c_in, bit * c_out);

//Some code given by Professor Mobus
bit gate8(bit, bit, bit, bit);
bit gate9(bit, bit, bit, bit);
bit gate0(bit, bit, bit);
bit gate1(bit, bit, bit);
bit gate2(bit, bit, bit);
bit gate3(bit, bit, bit);
bit gate4(bit, bit, bit);
bit gate5(bit, bit, bit);
bit gate6(bit, bit, bit);




typedef struct {
	FullAdder adders[16]; // or #define number of adders
	Register A, B, R;
	unsigned char flags; // flags[0]=O, flags[1]=C, flags[2]=Z, flags[3]=N
} RippleCarryAdder;

typedef RippleCarryAdder * RippleCarryAdderPtr;

// prototypes
int rippleCarryAdderSetRegisters(RippleCarryAdderPtr this, unsigned short A, unsigned short B);
int rippleCarryAdderAdd(RippleCarryAdderPtr this); // returns error code if a problem occurred
unsigned short rippleCarryAdderGetResult(RippleCarryAdderPtr, int * error);  // error is an integer for error codes
unsigned char rippleCarryAdderGetFlags(RippleCarryAdderPtr this, int * error);