//
// Created by GrastChan on 2022/7/9.
//
#include <stdio.h>

// We just need the unsigned sum to detect the overflow
int uadd_ok(unsigned int x, unsigned int y){
    unsigned int sum = x + y;
    return sum >= x;
}

// Detect whether int sum has overflowed.
int tadd_ok(int x, int y){
    int sum = x + y;

    if(x>0 && y>0 && sum<0) return 0;

    if(x<0 && y<0 && sum>0) return 0;

    return 1;
}

// Task: tsub_ok?
// WARNING: This is a bugged version

//int tsub_ok(int x, int y){
//    return tadd_ok(x, -y);
//}
// The problem is about Tmin, what if y = Tmin?
int tsub_ok(int x, int y){
    if(y<0 && y-1<0){
        return tadd_ok(x, -y);
    }
    return x<0;
}

//int main(){
//    int y = 0x80000000;
//    printf("%d",y-1);
//    printf("%d", -y);
//
//}