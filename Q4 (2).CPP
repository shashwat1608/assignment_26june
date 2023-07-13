#include <iostream>
#include <vector>

bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    int count = 0;
    int size = flowerbed.size();
    int prev = -1; // Initialize the previous plot as empty

    for (int i = 0; i < size; i++) {
        if (flowerbed[i] == 1) {
            if (prev < 0)
                count += i / 2;
            else
                count += (i - prev - 2) / 2;

            prev = i;
        }
    }

    if (prev < 0)
        count += (size + 1) / 2;
    else
        count += (size - prev - 1) / 2;

    return count >= n;
}

int main() {
    // Example usage
    std::vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    bool canPlant = canPlaceFlowers(flowerbed, n);
    std::cout << (canPlant ? "True" : "False") << std::endl;

    return 0;
}
