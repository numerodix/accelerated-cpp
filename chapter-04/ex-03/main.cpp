#include <iomanip>
#include <iostream>

int width(unsigned int x) {
    unsigned int w = 2;

    while (x > 10) {
        x /= 10;
        ++w;
    }

    return w;
}

int main() {
    const unsigned int maxval = 1000;
    const unsigned int maxprod = maxval * maxval;

    const unsigned int wval = width(maxval);
    const unsigned int wprod = width(maxprod);

    for (unsigned int i = 0; i <= maxval; i++) {
        std::cout << std::setw(wval) << i << " " 
                  << std::setw(wprod) << i*i << std::endl;
    }
}