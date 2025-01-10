#include <iostream>
#include <set>
using namespace std;

set<int> currentStates; // Set to track current possible states

bool isAccepted(string input);

int main() {
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

void move(set<int>& states, char c) {
    set<int> newStates;
    for (int state : states) {
        if (state == 0) {
            if (c == 'a') newStates.insert(1); // q0 -> q1 on 'a'
            else if (c == 'b') newStates.insert(3); // q0 -> q3 on 'b'
        } else if (state == 1) {
            if (c == 'a') newStates.insert(3); // q1 -> q3 on 'a'
            else if (c == 'b') newStates.insert(2); // q1 -> q2 on 'b'
        } else if (state == 2) {
            newStates.insert(2); // q2 -> q2 on any input (accepting state)
        } else if (state == 3) {
            newStates.insert(3); // q3 -> q3 on any input (invalid state)
        }
    }
    
    // Display the move
    displayMove(states, c, newStates);

    // Update the set of states
    states = newStates;
}

bool isAccepted(string str) {
    currentStates.clear();
    currentStates.insert(0); // Start at q0

    for (char c : str) {
        move(currentStates, c);
        if (currentStates.empty()) {
            return false; // No valid transitions, reject the string
        }
    }

    // Check if we are in an accepting state (q2)
    if (currentStates.find(2) != currentStates.end()) {
        return true; // If q2 is in the set, the string is accepted
    } else {
        return false; // Otherwise, reject the string
    }
}
