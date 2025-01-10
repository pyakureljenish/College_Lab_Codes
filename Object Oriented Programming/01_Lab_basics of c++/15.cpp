//This is the program to implement the idea of the default argument

#include<iostream>
using namespace std;
int subtract(int a,int b=4,int c=9){
    return a-b-c;
}
using namespace std;
int main(){
cout<<"The value is given by:"<<subtract(2,5);

cout<<"The value is given by:"<<subtract(1,1,1);
return 0;
}