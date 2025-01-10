//This is the program to double any number using reference variable.

#include<iostream>
using namespace std;
int main(){
    int x;
    int &ref=x;
    int y;

    cout<<"Enter the value of x";
    cin>>x;

    x=2*ref;

    cout<<x;
    return 0;

}