//
// Created by GrastChan on 2024/1/3.
//
#include <iostream>


using std::cout, std::endl;

void const_ref_show();

int main() {
    const_ref_show();
}

void const_ref_show() {
    int i = 42;
    int &r1 = i;
    const int &r2 = i;

    cout << i << " " << r1 << " " << r2 << endl;

    r1 = 10;
    // r2 = 10;  // 非法，常量引用没法修改
    // 但是结果是变化的 意味着可能有其他途径改值
    cout << i << " " << r1 << " " << r2 << endl;
}

void type_change_check() {
    double dual = 3.14;
    const int v1 = dual;
    const int &r1 = dual;

    int v2 = dual;
    // int &v2 = dual;  // 这个是非法的；本质上是对一个临时变量temp的(右值)引用了
}

void top_level_const() {
    int i = 0;
    int b = 2;

    // 底层     顶层
    const int *const pi = &i;
    // 底层const表示 它指向的东西 是个const不能变, 而顶层就是说自己这个东西不能变

    const int *p1 = &i;
    p1 = &b;
    // *p1 = 10;  非法

    int *const p2 = &i;
    // p2 = &b;   非法
    *p2 = 100;
}