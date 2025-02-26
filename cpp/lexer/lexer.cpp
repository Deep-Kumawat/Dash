#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the file for reading
    std::ifstream my_file("../../test_program.ds");

    // Check if the file was opened successfully
    if (!my_file) {
        std::cout << "Error: Unable to open the file." << std::endl;
        return 1; // Exit with an error code
    }

    // Read and print the file line by line
    std::string line;
    while (std::getline(my_file, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    my_file.close();

    return 0; // Successful execution
}
