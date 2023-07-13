#include <iostream>
#include <vector>

bool isMonotonic(std::vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        }
        if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5};  // Example array (monotonic increasing)
    // std::vector<int> nums = {5, 4, 3, 2, 1};  // Example array (monotonic decreasing)
    // std::vector<int> nums = {1, 2, 2, 3, 1};  // Example array (not monotonic)

    bool isMonotonicArray = isMonotonic(nums);

    if (isMonotonicArray) {
        std::cout << "The array is monotonic." << std::endl;
    } else {
        std::cout << "The array is not monotonic." << std::endl;
    }

    return 0;
}
