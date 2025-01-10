//This is the program to implement the inline function

#include<iostream>
using namespace std;
inline int divide(int a,int b){
    return a/b;
}

int main(){
int c;
c= divide(4,2);

cout<<"The number is"<<c;

    return 0;
}