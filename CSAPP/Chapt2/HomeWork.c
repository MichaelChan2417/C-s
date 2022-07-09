//
// Created by GrastChan on 2022/7/9.
//
#include <stdio.h>
#include <limits.h>

/***************************** Exercise 2.61 *****************************/
// Return 1, when achieve the following conditions
// A. all bits are 1
int cond_A(int x){
    // so x should be 0xFFFFFFFF;
    x += 1;
    return !x;
}
// B. all bits are 0
int cond_B(int x){
    return !x;
}
// C. Least Significant Byte all 1s
int cond_C(int x){
    x = x << ((sizeof(int) - 1)<<3);
    x = x >> ((sizeof(int) - 1)<<3);

    return (cond_A(x));
}
// D. Highest Significant Byte all 0s.
int cond_D(int x){
    x = x >> ((sizeof(int) - 1)<<3);
    return cond_B(x);
}


/***************************** Exercise 2.62 *****************************/
// Return 1, if the machine(could be all byte_length for int) is arithmetic>>ing
int int_shift_are_arithmetic(){
    int shift_length = sizeof(int)<<3;

    int x = -1;
    x = x>>(shift_length-1);

    return !!x;  // this can be simplified as x != 0;
}


/***************************** Exercise 2.63 *****************************/
// implements the function srl to shift logically using arithmetically.
// and function arl to shift arithmetically when shift logically.
unsigned srl(unsigned x, int k){
    // First line is given, this is arithmetical shift
    unsigned xsra = (int) x >> k;

    // then I could go get a mask
    int mask_d = INT_MIN;
    int mask = mask_d >> k;  // cannot make k-1 here, whatif k=0?
    mask = mask << 1;

    xsra = xsra & (~mask);
    return xsra;
}

int sra(int x, int k){
    // First line is given
    int xsrl = (unsigned) x >> k;

    // set the mask
    int size_int = sizeof(int)<<3;
    x = x >> (size_int-1);
    x = x << (size_int-1 - k);

    xsrl = x | xsrl;

    return xsrl;
}


/***************************** Exercise 2.64 *****************************/
// Return 1 when any odd bit of x equals 1; 0 otherwise
int any_odd_one(unsigned x){
    unsigned y = x<<1;
    y += x+1;

    return !y;
}


/***************************** Exercise 2.65 *****************************/
// Return 1 when x contains odd numbers of 1s; 0 otherwise
int Odd_Ones(unsigned x){
    x = x ^ (x>>16);
    x = x ^ (x>>8);
    x = x ^ (x>>4);
    x = x ^ (x>>2);
    x = x ^ (x>>1);

    return x&1;
}


/***************************** Exercise 2.66 *****************************/
// Generate the mask of the most left 1 in x. Assume w = 32;
// For example, 0xFF00 -> 0x8000, and 0x6600 -> 0x4000
// up to 15 operands(specified)
int left_most_one(int x){
    // We want "00010000000", why can't we have "00011111111"?
    unsigned mask = x;
    mask = mask | (mask>>1);
    mask = mask | (mask>>2);
    mask = mask | (mask>>4);
    mask = mask | (mask>>8);
    mask = mask | (mask>>16);

    return x&((int)((mask>>1)+1));
}


/***************************** Exercise 2.68 *****************************/
// Mask with least n bits set to 1
int lower_one_mask(int n){

    int x = 0;
    x = ~x;
    // get the not-vertion of final target
    x <<= n;

    return ~x;
}


/***************************** Exercise 2.69 *****************************/
// do the rotation left shift;
unsigned rotate_left(unsigned x, int n){
    unsigned left_part = x >> (32-n);
    unsigned right_part = x << n;

    return left_part + right_part;
}


/***************************** Exercise 2.70 *****************************/
// return 1 when x can be represented as an n-bit, 2's complement
int fits_bits(int x, int n){
    // which means when added on 0...010..(n-1)...0.
    // The n-th bit before should all be 0
    // Also if n>= 32 just return 1; I did not implement this part; just use ?:
    int holder = 1<<(n-1);
    holder += x;
    holder = holder >> n;

    return !holder;
}


/***************************** Exercise 2.63 *****************************/




/***************************** Exercise 2.63 *****************************/



main(){

    int x = 0xab5;

    unsigned a = 0xe0000000;
    unsigned b = 0xe0000000;

    x = a+b;
    printf("%u", x);

}