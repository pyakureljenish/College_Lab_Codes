#include <iostream>
using namespace std;
int currentState = 0;
int prevState = 0;
bool isAccepted(string);
int main(){
    string input;
    cout << "Enter any string of a and b : " << endl;
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
        currentState = 1;
    }
    else{
        currentState = 0;
    }
    cout << "Move(" << prevState << "," << c << ") = " << currentState << endl;
    prevState = currentState;
}

void checkq1(char c){
    if(c == 'b'){
        currentState = 2; // Transition to accepting state if "ab" is found
    }
    else{
        currentState = 0;
    }
    cout << "Move(" << prevState << "," << c << ") = " << currentState << endl;
    prevState = currentState;
}

void checkq2(char c){
    currentState = 2; // Stay in the accepting state
    cout << "Move(" << prevState << "," << c << ") = " << currentState << endl;
    prevState = currentState;
}

bool isAccepted(string str) {
    int len = str.length();
    for (int i = 0; i < len; i++) {
        if (currentState == 0)
            checkq0(str[i]);
        else if (currentState == 1)
            checkq1(str[i]);
        else if (currentState == 2)
            checkq2(str[i]);
        else
            return false;
    }
    return currentState == 2; // Accept if in state q2
}
