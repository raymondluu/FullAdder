//Raymond Luu
//10/22/2012
//TCSS 371 Mobus
// HW 3 - fullAdder

#include <stdio.h>
#include <stdlib.h>
#include "fullAdder.h"

bit fullAdder (bit a, bit b, bit c_in, bit * c_out)
{
	//Some code from Professor Mobus 
    bit result=0;

    bit s=0, c=c_in;        /* result and carry; carry in for bit 0 is 0 */
		
        printf("bitA: %d  bitB: %d\n",a,b);
        s = gate8(gate0(a,b,c),gate3(a,b,c),
            gate5(a,b,c),gate6(a,b,c));
        c = gate9(gate0(a,b,c),gate1(a,b,c),
            gate2(a,b,c),gate4(a,b,c));  /* carry bit forward to next loop */
        printf("sum: %d   carry: %d\n",s,c);
		
        // if (i==0) mag = 1;
        // else {
            // mag = 1;
            // for (n=0; n<i; n++) mag = mag * 2;
        // }
        // if (s > 0) result = result + mag;
    return result;
	
	}

bit gate8(bit gate_0, bit gate_3, bit gate_5, bit gate_6) {
    bit r;

    r = or(or(or(gate_0,gate_3),gate_5),gate_6);
    return r;
}

bit gate9(bit gate_0, bit gate_1, bit gate_2, bit gate_4) {
    bit r;

    r = or(or(or(gate_0,gate_1),gate_2),gate_4);
    return r;
}

bit gate0(bit bit_a, bit bit_b, bit carry) {
    return and(and(bit_a,bit_b),carry);
}

bit gate1(bit bit_a, bit bit_b, bit carry) {
    return and(and(bit_a,bit_b),not(carry));
}

bit gate2(bit bit_a, bit bit_b, bit carry) {
    return and(and(bit_a,not(bit_b)),carry);
}

bit gate3(bit bit_a, bit bit_b, bit carry) {
    return and(and(bit_a,not(bit_b)),not(carry));
}

bit gate4(bit bit_a, bit bit_b, bit carry) {
    return and(and(not(bit_a),bit_b),carry);
}

bit gate5(bit bit_a, bit bit_b, bit carry) {
    return and(and(not(bit_a),bit_b),not(carry));
}

bit gate6(bit bit_a, bit bit_b, bit carry) {
    return and(and(not(bit_a),not(bit_b)),carry);
}

RippleCarryAdderPtr rippleCarryAdderConstructor(void) {
	RippleCarryAdderPtr rippleCarryAdder = (RippleCarryAdderPtr) malloc(sizeof(RippleCarryAdderPtr));
	rippleCarryAdder->A = 0;
	rippleCarryAdder->B = 0;
	rippleCarryAdder->R = 0;
	rippleCarryAdder->flags = 0;
	return rippleCarryAdder;
}
int rippleCarryAdderSetRegisters(RippleCarryAdderPtr this, unsigned short A, unsigned short B) {
	
}

int main()
{
//Some code given by Professor Mobus
    int valueA, valueB;

	RippleCarryAdderPtr rca = rippleCarryAdderConstructor();
	
// /* Data entry. Note that users may enter negative numbers, but they must be 15-bit magnitude */

    printf("ALU Simulation\nEnter operands as 15-bit 2s-complement numbers\n");
    printf("Input first operand: ");
    scanf("%x", &valueA);
    printf("\nInput second operand: ");
    scanf("%x", &valueB);
	
	rippleCarryAdderSetRegisters
    reg_A = (valueA & LOB_MASK);
    reg_B = (valueB & LOB_MASK);

    // reg_R = add(reg_A, reg_B);

     // printf("\nResult: %X\n", reg_R);
    // printf("\n\n%X\n", reg_A);
    // printf("%X\n", reg_B);
    // printf("Sign of A: %c\n", signOf(reg_A)?'-':'+');
    // printf("Sign of B: %c\n", signOf(reg_B)?'-':'+');
    // printf("AND 1, 0 = %d\n", and_gate((short)1,(short)0));
    // printf("AND 1, 1 = %d\n", and_gate((short)1,(short)1));
    // printf("OR 1, 0 = %d\n", or_gate((short)1,(short)0));
    // printf("OR 1, 1 = %d\n", or_gate((short)1,(short)1));
    // printf("OR 0, 0 = %d\n", or_gate((short)0,(short)0));
	
	fullAdder(valueA, valueB, 0, 0);
}