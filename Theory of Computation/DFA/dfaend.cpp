/*A program to implement DFA that accepts string ending with 01 
q0->0
q1->1,
q2->2
*/
#include <iostream>
using namespace std;
int currentState = 0;
int prevState= 0;
bool isAccepted(string);
int main(){
	string input;
	cout<<"Enter any string of 0 and 1 : "<<endl;
	cin>>input;
   // string str = "0101010"; 
    if (isAccepted(input)) {
        
        cout<<"STRING ACCEPTED"; 
    }
    else{
         cout<<"STRING NOT ACCEPTED"; 
    }
    return 0; 
}
void checkq0(char c){
    if(c=='0'){
        currentState = 1;
    }
    else if(c=='1'){
        currentState = 0;
    }
    
    cout<<"Move("<<prevState<<","<<c<<")="<<currentState<<endl;
    prevState = currentState;
}
void checkq1(char c){
    if(c=='0'){
        currentState = 1;
    }
    else if(c=='1'){
        currentState = 2;
    }

    cout<<"Move("<<prevState<<","<<c<<")="<<currentState<<endl;
    prevState = currentState;
}
void checkq2(char c){
    if(c=='0') {
        currentState = 1;
    }
    else if(c=='1'){
        currentState = 0;
    }
    cout<<"Move("<<prevState<<","<<c<<")="<<currentState<<endl;
    prevState = currentState;
}
bool isAccepted(string str)
{
    int i, len = str.length();

    for (i = 0; i < len; i++) {
        if (currentState == 0)
            checkq0(str[i]);

        else if (currentState == 1)
            checkq1(str[i]);

        else if (currentState == 2)
            checkq2(str[i]);
               
        else
            return 0;
    }
    
    if (currentState == 2)//final state in this example
        return 1;
    else
        return 0;
}


