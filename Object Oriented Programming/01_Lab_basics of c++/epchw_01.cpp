//This is the c++ program that accept a number and returns a remainder of 10
#include <iostream>
using namespace std;
int returnrem(int a,int b){
    int c=a%b;
    if (c<=10){
  return c;
}
else{
    return 1;
}
    
}


int main() {
    int a,b;

    cout<<"Enter the number1"<<endl;
    cin>>a;

    cout<<"Enter the number2";
    cin>>b;

  

cout<<"The remainder is:"<<  returnrem(a,b);

    return 0;
}