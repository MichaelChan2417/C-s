/**
  Created by GrastChan on 2023/5/8.
*/
#include <iostream>

int main() {
    int sum = 0;
    int value;

    while (std::cin >> value) {
        sum += value;
    }

    std::cout << "Sum is: " << sum << std::endl;
    return sum;
}
