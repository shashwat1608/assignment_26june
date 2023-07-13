#include <iostream>
#include <unordered_map>
#include <vector>

int findLHS(std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;
    int maxLength = 0;
    
    // Count the frequency of each number in the array
    for (int num : nums) {
        countMap[num]++;
    }
    
    // Iterate over the numbers in the array
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        int num = it->first;
        int count = it->second;
        
        // Check if there is a number with a difference of 1
        if (countMap.find(num + 1) != countMap.end()) {
            int subsequenceLength = count + countMap[num + 1];
            maxLength = std::max(maxLength, subsequenceLength);
        }
    }
    
    return maxLength;
}

int main() {
    // Example usage
    std::vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int length = findLHS(nums);
    std::cout << "Length of the longest harmonious subsequence: " << length << std::endl;
    
    return 0;
}
