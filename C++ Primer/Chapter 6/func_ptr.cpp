//
// Created by GrastChan on 2024/1/5.
//
#include <string>

using std::string;

bool lenCompare(const string &s1, const string &s2) {
    return true;
}

// 函数指针在形参中
void useBigger(const string &s1, const string &s2,
               bool pf(const string &, const string &)) {
    ;
}
// 等价的声明
void useBigger2(const string &s1, const string &s2,
                bool (*pf)(const string &, const string &)) {
    ;
}


// 但是可见这个真的很繁琐且复杂 所以我们可以使用别名
typedef bool Func(const string &, const string &);
typedef decltype(lenCompare) Func2;     // 与上等价
typedef bool (*FuncP)(const string &, const string &);      // 也是等价的
typedef decltype(lenCompare) *FuncP2;   // 与上等价


// 所以我们现在就可以重写了
void useBigger3(const string &, const string &, Func) {}
void useBigger4(const string &, const string &, Func2) {}
void useBigger5(const string &, const string &, FuncP) {}
// void useBigger5(const string &, const string &, FuncP2) {} // 可见这个是重复的
void useBigger6(const string &, const string &, FuncP2) {}


int main() {
    // this is a function ptr
    bool (*fp)(const string &s1, const string &s2);

    fp = lenCompare;
    // this is also ok
    fp = &lenCompare;

    string s1 = "ababac";
    string s2 = "ijnini";

    // 3 same calling ways
    bool res1 = fp(s1, s2);
    bool res2 = (*fp)(s1, s2);
    bool res3 = lenCompare(s1, s2);

}