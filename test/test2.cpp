#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter multiple words separated by commas: ";
    std::getline(std::cin, input, ',');
    std::cout << "You entered: " << input << std::endl;
    std::cout << "You entered: " << &input[1] << std::endl;

    return 0;
}