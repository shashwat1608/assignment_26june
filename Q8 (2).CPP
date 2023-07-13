#include <iostream>
#include <vector>
#include <algorithm>

int minimumScore(std::vector<int>& nums, int k) {
    int n = nums.size();
    std::sort(nums.begin(), nums.end());
    int minScore = nums[n - 1] - nums[0];  // Initialize the minimum score as the difference between the maximum and minimum elements

    // Try all possible values of x
    for (int i = 0; i < n - 1; i++) {
        int currentMin = nums[i];
        int currentMax = nums[i + 1];
        int updatedMin = std::min(nums[0] + k, currentMin + k);
        int updatedMax = std::max(nums[n - 1] - k, currentMax - k);
        minScore = std::min(minScore, updatedMax - updatedMin);
    }

    return minScore;
}

int main() {
    std::vector<int> nums = {1, 5, 3, 9};
    int k = 3;

    int result = minimumScore(nums, k);
    std::cout << "Minimum score: " << result << std::endl;

    return 0;
}
