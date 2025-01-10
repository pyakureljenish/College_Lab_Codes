//This is the program to demonstrate about the macros

#include<iostream>
#define PI 3.14
#define subtract(y,x) ((y)-(x))
using namespace std;
int main(){

int y=10,x=3;
cout<<"The subtraction is:"<<subtract(y,x)<<endl;
cout<<"The value of PI is:"<<PI;
return 0;
}