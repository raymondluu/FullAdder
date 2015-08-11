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


#define TRUE -1
#define FALSE 0

/*
*=====================================================================================================
*
* Function prototypes
*
*=====================================================================================================
*/

int add(int, int);
int and_gate(int, int);
int or_gate(int, int);
int not_gate(int);
short mask_bit_0(short);
int signOf(int);


/*
* ================================================================================================
* These are the gates for a full adder. Gates 8 & 9 are or gates (see code), while 0 through 6
* are and gates with various inverted inputs. This set should match the full adder circuit on
* page 62 of the text book.
*=================================================================================================
*/
int gate8(int, int, int, int);
int gate9(int, int, int, int);
int gate0(int, int, int);
int gate1(int, int, int);
int gate2(int, int, int);
int gate3(int, int, int);
int gate4(int, int, int);
int gate5(int, int, int);
int gate6(int, int, int);
/*
*====================================================================================================
*
*/
