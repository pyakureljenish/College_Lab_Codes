#include <iostream>
#include <regex>
#include <string>

bool isValidMobileNumber(const std::string& str) {
    // Regular expression for a 10-digit mobile number
    std::regex pattern("^[789][0-9]{9}$");
    return std::regex_match(str, pattern); // Returns true if the string matches the pattern
}

int main() {
    std::string number;
    std::cout << "Enter a mobile number: ";
    std::cin >> number;
    
    if (isValidMobileNumber(number)) {
        std::cout << "Accepted" << std::endl;
    } else {
        std::cout << "Rejected" << std::endl;
    }
    
    return 0;
}
