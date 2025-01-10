//This is the program to demostrate the explicit function
#include<iostream>
using namespace std;
int main(){
    float c,a=5,b=2;
    c=a/b;
    cout<<"The result without typecast is:"<<c<<endl;
    c=(int)(a/b);
    cout<<"The result with typecast is:"<<c;
    return 0;
}


