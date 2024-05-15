#include <iostream>
#include <string>

int main() {
    // Declare a string to store the name
    std::string name;

    // Prompt the user to enter a name
    std::cout << "Please enter your name: ";

    // Get the name input from the user
    std::getline(std::cin, name);

    // Print the name
    std::cout << "Hello, " << name << "!" << std::endl;

    return 0;
}
