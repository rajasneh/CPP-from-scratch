#include <iostream>

int main() {
    int num1, num2, sum;

    // Ask the user to enter two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    std::cout << "The sum of " << num1 << " and " << num2 << " is " << sum << std::endl;

    return 0;
}
