//
// Created by GrastChan on 2024/1/3.
//
#include <iostream>

int main() {

}

void const_ptr_reset(const int *x) {
    // *x = 10;
}

void test() {
    int nx = 10;
    const int cnx = 20;
    const int c2nx = nx;

    const_ptr_reset(&nx);
    const_ptr_reset(&cnx);
    const_ptr_reset(&c2nx);
}