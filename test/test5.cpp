#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers; // Declare a vector of integers

    // Add elements to the vector
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    // Access elements in the vector
    std::cout << "Element at index 0: " << numbers[0] << std::endl;
    std::cout << "Element at index 1: " << numbers[1] << std::endl;
    std::cout << "Element at index 2: " << numbers[2] << std::endl;

    // Modify elements in the vector
    numbers[1] = 25;

    // Remove an element from the vector
    numbers.pop_back();

    // Iterate over the vector using an index-based loop
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << "Element at index " << i << ": " << numbers[i] << std::endl;
    }

    return 0;
}
