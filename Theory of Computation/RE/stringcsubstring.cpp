#include <iostream>
#include <regex>
#include <string>

bool containsSubstring(const std::string& str, const std::string& substr) {
    // Create the regex pattern for the substring
    std::regex pattern(substr);
    
    // Check if the string contains the substring using regex_search
    return std::regex_search(str, pattern);
}

int main() {
    std::string input;
    const std::string substring = "abc"; // Change this to the desired substring

    std::cout << "Enter a string: ";
    std::getline(std::cin, input); // Use getline to allow spaces in input

    if (containsSubstring(input, substring)) {
        std::cout << "The string contains the substring '" << substring << "'.\n";
    } else {
        std::cout << "The string does not contain the substring '" << substring << "'.\n";
    }

    return 0;
}
