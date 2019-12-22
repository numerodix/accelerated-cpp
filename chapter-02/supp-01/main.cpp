#include <iostream>

int sqrt(int num) {
    int divisor = 1;

    while (divisor * divisor < num) {
        divisor += 1;
    }

    return divisor;
}

int main() {
    std::cout << "sqrt(25) = " << sqrt(25) << std::endl;
}