//This is the program to implement the function overloading

#include<iostream>
using namespace std;
void subtract(int a,int b){
    cout<<"subtract"<<(a-b)<<'\n';
}

void operation(int a,int b ,int c){
    cout<<"Operation"<<(a+b-c)<<'\n';
}
int main(){


subtract(8,10);
operation(50,20,30);
return 0;
}