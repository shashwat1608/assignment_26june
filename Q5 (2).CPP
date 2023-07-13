#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumProduct(vector<int>& nums) {
    int n = nums.size();

    // Sort the array in ascending order
    sort(nums.begin(), nums.end());

    // Return the maximum of two cases:
    // 1. Product of the three largest numbers
    // 2. Product of the two smallest numbers and the largest number
    return max(nums[n - 1] * nums[n - 2] * nums[n - 3], nums[0] * nums[1] * nums[n - 1]);
}

int main() {
    // Test the function with some example inputs
    vector<int> nums1 = {1, 2, 3, 4};
    cout << "Maximum Product: " << maximumProduct(nums1) << endl;

    vector<int> nums2 = {-1, -2, -3, -4};
    cout << "Maximum Product: " << maximumProduct(nums2) << endl;

    vector<int> nums3 = {-1, 2, -3, 4};
    cout << "Maximum Product: " << maximumProduct(nums3) << endl;

    return 0;
}
