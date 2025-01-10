#include <iostream>
#include <cctype>  // For checking alphabet and digit
using namespace std;

int currentState = 0; // Global variable to track the state
int prevState = 0;

bool isAccepted(string input);

int main() {
    string input;
    cout << "Enter an identifier: ";
    cin >> input;

    if (isAccepted(input)) {
        cout << "STRING ACCEPTED: Valid Identifier" << endl;
    } else {
        cout << "STRING NOT ACCEPTED: Invalid Identifier" << endl;
    }

    return 0;
}

// Function to handle transitions from state q0 (starting state)
void checkq0(char c) {
    if (isalpha(c) || c == '_') {
        currentState = 1; // Valid first character (alphabet or underscore)
    } else {
        currentState = -1; // Invalid character, move to rejection state
    }
    cout << "Move(" << prevState << "," << c << ")=" << currentState << endl;
    prevState = currentState;
}

// Function to handle transitions from state q1 (valid state after the first character)
void checkq1(char c) {
    if (isalnum(c) || c == '_') {
        currentState = 1; // Stay in state q1 for valid characters (alphabet, digit, or underscore)
    } else {
        currentState = -1; // Invalid character, move to rejection state
    }
    cout << "Move(" << prevState << "," << c << ")=" << currentState << endl;
    prevState = currentState;
}

// Function to check if the string is a valid identifier
bool isAccepted(string str) {
    currentState = 0; // Start in state q0

    for (char c : str) {
        if (currentState == 0) {
            checkq0(c); // Process the first character
        } else if (currentState == 1) {
            checkq1(c); // Process subsequent characters
        } else {
            return false; // Rejected due to invalid state
        }

        if (currentState == -1) {
            return false; // If we hit an invalid state, reject
        }
    }

    return currentState == 1; // Accept if we are still in state q1 (valid state)
}
