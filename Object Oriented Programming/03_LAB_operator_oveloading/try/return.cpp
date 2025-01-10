//this is the simple program to demostrate the use of the return in the program 

#include<iostream>
using namespace std;
double square(double x){
    double result=x*x*x;
    return result;

}
int main(){

    double x= square(2);

    return 0;
}