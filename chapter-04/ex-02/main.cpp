#include <iomanip>
#include <iostream>

int main() {
    for (unsigned int i = 0; i <= 100; i++) {
        std::cout << std::setw(3) << i << "  " 
                  << std::setw(5) << i*i << std::endl;
    }
}