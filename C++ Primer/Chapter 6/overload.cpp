//
// Created by GrastChan on 2024/1/5.
//
#include <iostream>

int calc(int v1, int v2) {
    return 0;
}
// this is re-definition
int calc(const int v1, const int v2) {
    return 1;
}


int calc_ref(int &v1, int &v2) {
    return 0;
}
int calc_ref(const int &v1, const int &v2) {
    return 1;
}