#include <iostream>
#include <vector>
#include <unordered_set>

int maxCandies(std::vector<int>& candyType) {
    int n = candyType.size();
    int maxEat = n / 2;

    std::unordered_set<int> uniqueCandies;
    for (int i = 0; i < n && uniqueCandies.size() < maxEat; i++) {
        uniqueCandies.insert(candyType[i]);
    }

    return uniqueCandies.size();
}

int main() {
    // Example usage
    std::vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int maxDifferentCandies = maxCandies(candyType);
    std::cout << "Maximum number of different types of candies Alice can eat: " << maxDifferentCandies << std::endl;

    return 0;
}
