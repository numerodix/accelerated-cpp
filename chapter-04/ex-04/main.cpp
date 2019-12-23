#include <iomanip>
#include <iostream>

int width(unsigned int x) {
    unsigned int w = 5;

    while (x > 10) {
        x /= 10;
        ++w;
    }

    return w;
}

int main() {
    const double maxval = 1000;
    const double maxprod = maxval * maxval;

    const unsigned int wval = width(maxval);
    const unsigned int wprod = width(maxprod);

    for (double i = 0.1; i <= maxval; i+=0.3) {
        std::cout << std::setprecision(2) << std::fixed
                  << std::setw(wval) << i << "\t" 
                  << std::setw(wprod) << i*i << std::endl;
    }
}