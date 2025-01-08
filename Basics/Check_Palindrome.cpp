#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string cleanedStr;
    
    // Remove non-alphanumeric characters and convert to lowercase
    for (char ch : str) {
        if (isalnum(ch)) {
            cleanedStr += tolower(ch);
        }
    }

    // Check if the cleaned string is a palindrome
    int left = 0, right = cleanedStr.size() - 1;
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input)) {
        std::cout << "\"" << input << "\" is a palindrome.\n";
    } else {
        std::cout << "\"" << input << "\" is not a palindrome.\n";
    }

    return 0;
}
