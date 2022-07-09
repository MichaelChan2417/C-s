#include <stdio.h>

typedef unsigned char *byte_pointer;

// this is showing the bytes with at-least 2 digits of HEX
void show_bytes(byte_pointer start, int len){
    int i;
    
    for(i=0; i<len; i++){
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x){
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *));
}

//int main(){
//    unsigned char s = 'a';
//
//    int val = 0xA7654321;
//    // this is how you can see the BIG-end or SMALL-end
//    show_bytes(&s, 4);
//
//    return 0;
//}
