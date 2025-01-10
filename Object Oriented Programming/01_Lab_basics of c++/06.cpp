//This is the program to find factorial

#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n,result;
    cout<<"Enter the desired number"<<'\n';
    cin>>n;

    result=factorial(n);

    cout<<"The factorial of the number is:"<<result;

    return 0;
}