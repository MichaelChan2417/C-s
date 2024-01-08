//
// Created by MSI_NB on 2024/1/6.
//
#include <list>
#include <string>
#include <vector>

void assign_show() {
    std::list<std::string> names;
    std::vector<const char*> oldstyle;

    // this is a mis-type 因为vector不能直接给list
    names = oldstyle;

    // 可以用const char* 构造string
    names.assign(oldstyle.cbegin(), oldstyle.cend());
    // 这个反过来不行
    oldstyle.assign(names.cbegin(), names.cend());
}