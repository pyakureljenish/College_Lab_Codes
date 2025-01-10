#include <iostream>
#include <set>
using namespace std;

set<int> currentStates; // Set to store multiple possible current states

bool isAccepted(string input);

int main(){
    string input;
    cout << "Enter any string of 'a' and 'b': " << endl;
    cin >> input;
    if (isAccepted(input)) {
        cout << "STRING ACCEPTED" << endl;
    } else {
        cout << "STRING NOT ACCEPTED" << endl;
    }
    return 0;
}

// Function to display the state transitions
void displayMove(set<int> states, char c, set<int> newStates) {
    cout << "Move({";
    for (int state : states) {
        cout << state << " ";
    }
    cout << "}, '" << c << "') = {";
    for (int newState : newStates) {
        cout << newState << " ";
    }
    cout << "}" << endl;
}

// Function to handle transitions in the NFA
void move(set<int>& states, char c) {
    set<int> newStates;  // Set to store new possible states after the move
    for (int state : states) {
        if (state == 0) {
            if (c == 'a') {
                newStates.insert(1); // q0 -> q1 on 'a'
            }
            newStates.insert(0); // q0 -> q0 on any input
        } else if (state == 1) {
            if (c == 'b') {
                newStates.insert(2); // q1 -> q2 on 'b' (accepting state)
            }
        } else if (state == 2) {
            newStates.insert(2); // Stay in the accepting state
        }
    }

    // Display the move for visualization
    displayMove(states, c, newStates);

    // Update the set of states to the new possible states
    states = newStates;
}

// Function to check if the string is accepted by the NFA
bool isAccepted(string str) {
    currentStates.clear();
    currentStates.insert(0); // Start in q0

    // Process each character in the input string
    for (char c : str) {
        move(currentStates, c);
        if (currentStates.empty()) {
            return false; // No valid transitions, reject the string
        }
    }

    // Check if we are in the accepting state (q2)
    return currentStates.find(2) != currentStates.end();
}
