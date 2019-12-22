#include <cmath>
#include <iostream>
#include <vector>

int max(std::vector<int> nums) {
    int largest = nums[0];

    // i: ranges from  1  to  nums.size() - 1
    // invariant: largest = max(nums[0], nums[1], ..., nums[i])
    for (unsigned int i = 1; i < nums.size(); i++) {
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }

    return largest;
}

int main() {
    std::vector<int> nums{11, 15, 16, 21, 23, 31, 43, 54, 56};
    std::cout << "max(nums) = " << max(nums) << std::endl;
}