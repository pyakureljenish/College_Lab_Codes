//this is the program to use function to print the sum

/*sum without function
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number\n",
    cin>>a;

    cout<<"Enter the second number\n",
    cin>>b;

    int sum=a+b;
    cout<<"The sum of the two numbers are: "<<sum;

    return 0;
}*/

/*program using return type

#include<iostream>
using namespace std;
int addition(int a,int b){
    int sum=a+b;
    return sum;
}
int main(){
int a,b;

cout<<"Enter the first number\n",
    cin>>a;

    cout<<"Enter the second number\n",
    cin>>b;

    cout<<"The sum of the two numbers are:\n"<<addition(a,b);
    return 0;
}*/

//program using no return type

#include<iostream>
using namespace std;
void addition(int a,int b){
    int sum=a+b;
    cout<<"The sum of the two numbers are:\n"<<sum;
}
int main(){

    int a,b;

cout<<"Enter the first number\n",
    cin>>a;

    cout<<"Enter the second number\n",
    cin>>b;

    addition(a,b);

    return 0;

}    