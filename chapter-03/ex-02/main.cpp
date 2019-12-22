#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    std::vector<double> nums;
    for (double i = 1; i <= 10; i++) {
        nums.push_back(i);
    }

    // make sure we round and not truncate here
    int i25 = std::round((double) nums.size() / 4);
    int i50 = nums.size() / 2;
    int i75 = 3 * nums.size() / 4;

    // check if quartiles fall on single elements
    const bool sin = (nums.size() - 1) % 4 == 0;

    double p25 = !sin ? (nums[i25-1] + nums[i25]) / 2
                      : nums[i25];
    double p50 = nums.size() % 2 == 0 ? (nums[i50-1] + nums[i50]) / 2
                                      : nums[i50];
    double p75 = !sin ? (nums[i75-1] + nums[i75]) / 2
                      : nums[i75];

    cout << "vec size: " << nums.size() << endl;
    cout << "p25: " << p25 << endl
         << "p50: " << p50 << endl
         << "p75: " << p75 << endl;

    return 0;
}