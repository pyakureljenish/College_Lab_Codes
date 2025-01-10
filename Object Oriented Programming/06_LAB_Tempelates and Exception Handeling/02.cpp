// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
template <class T>
T mymax(T a, T b){
    if(a>b){
        return a;
        //cout<<"Maximum 1:"<<a<<endl;
    }
    else{
        return b;
        //cout<<"Maximum 1:"<<b<<endl;
    }
}

int main() {
   // int a=3,b=4;
cout<<"Maximum1:"<<mymax<int>(3,4)<<endl;
float x=7.5,y=6.5;
cout<<"Maximum2:"<<mymax<float>(x,y)<<endl;

    return 0;
}