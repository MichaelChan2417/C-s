//
// Created by GrastChan on 2024/1/5.
//
#include <string>
#include <iostream>
using std::string;

// const 版本
const string &shorterString(const string &s1, const string &s2) {
    std::cout << "const case" << std::endl;
    return s1.size() <= s2.size() ? s1 : s2;
}

// 非const版本，如果我不想得到一个const string& 呢？ 我想能修改他
string &shorterString(string &s1, string &s2) {
    std::cout << "normal case" << std::endl;
    auto &r = shorterString(const_cast<const string&>(s1),
                            const_cast<const string&>(s2));

    return const_cast<string&>(r);
}

int main() {
    string basic = "ininin";
    const string &ss1 = "abc";
    string &ss2 = basic;
    string &ss3 = basic;

    // const case: 非常量引用当作常量 (因为不能反过来！！！)
    std::cout << shorterString(ss1, ss2) << std::endl;

    // normal case: 编译器优化 两个都是非常量结果
    std::cout << shorterString(ss3, ss2) << std::endl;
}

// is it valid?
string& shortString(const string& s1, const string& s2) {
    // return s1.size() <= s2.size() ? s1 : s2;  // this is wrong
    return const_cast<string &>(s1.size() <= s2.size() ? s1 : s2);
}