// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
template <typename T,typename Q,typename R>
T mymax(T a, Q b,R c){
    return a+b-c;
}

int main() {
    /*int a=3;
    float b= 4.5;
    double c=3.2;*/

cout<<"Maximum2:"<<mymax<int,float,double>(3,4.5,3.2);

    return 0;
}