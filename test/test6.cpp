#include <iostream>
#include <vector>

int main() {
    const std::vector<int> numbers = {1, 2, 3, 4, 5}; // Declare a const vector of integers

    // Iterate over the vector using const auto
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
