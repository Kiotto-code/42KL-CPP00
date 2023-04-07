#include <iostream>
#include <string>
#include <vector> // For std::vector
#include <fstream> // For std::ifstream and std::ofstream

int main() {
    // Store the contents into a vector of strings
    std::vector<std::string> outputs;

    std::cout << "Reading from input.txt....\n";

    // Create the file object (input)
    std::ifstream infile("input.txt");

    // Temporary buffer
    std::string temp;

    // Get the input from the input file until EOF
    while (std::getline(infile, temp, ' ')) {
        // Add to the list of output strings
        outputs.push_back(temp);
    }

    // Use a range-based for loop to iterate through the output vector
    // for (const auto& i : outputs)
    //     std::cout << i << std::endl;
    for (int i = 0 ; i < outputs.size(); ++i)
        std::cout << outputs[i] << std::endl;

    return 0;
}