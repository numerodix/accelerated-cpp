#include <iostream>
#include <vector>

int main() {
    std::vector<double> nums{0.1, 1.2, 4.2, 0.4, 12.3, -34.0, -4.1};

    double sum;
    for (std::vector<double>::iterator it = nums.begin(); it != nums.end(); ++it) {
        sum += *it;
    }

    std::cout << "avg: " << sum / nums.size() << std::endl;

    return 0;
}