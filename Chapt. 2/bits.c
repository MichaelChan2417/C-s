// This is some of my work for lab0

#include <stdio.h>

// Task 1
// Complete Bit XOR using only & and ~
int bitXOR(int x, int y){
    // using the table
    return ~((~(x&(~y)))&(~(y&(~x))));
    // return (~((~x)&(~y)) & ~(x&y));
}

// Task 2
// Smallest two's complement integer
int tmin(void){
    return 0x1<<31;
}

// Task 3
// True only if x is the largest two's complement integer
int isTmax(int x){
    return ((x+1)>>31)&((~x)>>31)&1;

    // int a = !((x+1) ^ ~x), b = !!(x+1);
    // return a&b;

    // return !(x ^ 0x7FFFFFFF); // NO constant longer than 8 bits;
}

// Task 4
// True only if all odd-numbered bits in x set to 1
int allOddBits(int x){

    int hold = x<<1;
    return !~(x + hold);

    // int a = (x & (x >> 16));
    // int b = (a & (a >> 8));
    // return !((b & 0xAA) ^ 0xAA);
}

// Task 5
// return -x without using "-"
int negate(int x){
    return ~x + 1;
}

// Task 6
// True if 0x30 <= x <= 0x39.
int isAsciDigit(int x){
    // int base = 0x3<<4;
    // int a = x + (~base + 1);
    // int base2 = 10;
    // int b = a + (~base2 + 1);

    // a = a>>31;  // detect whether x>=0x30, a should be 0
    // b = b>>31;  // detect whether x<0x3A, b should be 111111111

    // return (b) & (~a) & 1;

    // or I could do in this way
    int y = x + (~0x30) + 1;

    return (!(y>>3)) | !(y^0x9) | !(y^0x8);
}

// Task 7
// conditional -- x ? y : z
int conditional(int x, int y, int z){
    // return (x&y) | ((~x)&z);  // here is the trick need 0x1->0xffff; and 0x0->0x0000
    int mask = (!x) + (~1) + 1;

    return (mask & y) | ((~mask)&z);
}

// Task 8
// True if x<=y
int isLessOrEqual(int x, int y){
    // we need to consider whether they are the same sign?
    int x_h = (x>>31)&1, y_h = (y>>31)&1;
    int same_sign = !(x_h ^ y_h);

    // consider if the same sign
    int hold = y + ~x + 1;
    int pos = (hold>>31)&1;
    return (!same_sign & y_h) | (same_sign & ~pos);
}

// Task 9
// Implement Logical Negative (!) without using (!)
int logicalNeg(int x){
    int self_sign = x>>31;
    int self_1 = x + ~1 + 1;
    self_1 = self_1 >> 31;

    int flag = (self_sign ^ self_1) & 1; // if x is 0 then flag = 1; else flag = 0;

    return flag;

    // centralize the keys, if there is one 1, then e would be 1
    // int a = x | (x << 16);
    // int b = a | (a << 8);
    // int c = b | (b << 4);
    // int d = c | (c << 2);
    // int e = d | (d << 1);
    // return (e >> 31) + 1;
}

// Task 10
// Counts the minimum number of bits needed to represent x 
int howManyBits(int x){
    int highest = (x>>31) & 1;
    
}

int main(){

    int x = 0x0;
    int y = 82, z = 81;

    printf("%d %d", logicalNeg(x), !x);

    return 0;
}
