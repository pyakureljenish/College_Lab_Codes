#include <iostream>
using namespace std;

int currentState = 0;
int prevState= 0;

bool isAccepted(string input);

int main(){
    string input;
    cout << "Enter a string of 'a' and 'b': " << endl;
    cin >> input;

    if (isAccepted(input)) {
        cout << "STRING ACCEPTED" << endl;
    } else {
        cout << "STRING NOT ACCEPTED" << endl;
    }

    return 0;
}

void checkq0(char c){
    if(c == 'a'){
        currentState = 1;  // Move to state q1 on 'a'
    } else if(c == 'b'){
        currentState = 0;  // Stay in state q0 on 'b'
    }

    cout << "Move(" << prevState << "," << c << ")=" << currentState << endl;
    prevState = currentState;
}

void checkq1(char c){
    if(c == 'a'){
        currentState = 1;  // Stay in state q1 on 'a'
    } else if(c == 'b'){
        currentState = 2;  // Move to state q2 (accepting) on 'b'
    }

    cout << "Move(" << prevState << "," << c << ")=" << currentState << endl;
    prevState = currentState;
}

void checkq2(char c){
    // Once in state q2 (accepting), stay here
    cout << "Move(" << prevState << "," << c << ")=" << currentState << endl;
    prevState = currentState;
}

bool isAccepted(string input) {
    int len = input.length();

    for (int i = 0; i < len; i++) {
        if (currentState == 0) {
            checkq0(input[i]);
        } else if (currentState == 1) {
            checkq1(input[i]);
        } else if (currentState == 2) {
            checkq2(input[i]);
        } else {
            return false;
        }
    }

    // Final state q2 is the accepting state
    if (currentState == 2)
        return true;
    else
        return false;
}
