#include<iostream>
using namespace std;
template<class T>
class Base{
    T a,b;
    public:
    void set(T x ,T b){
        x=a;
        y=b;
    }

    void show(){
        cout<<x<<y<<endl;
    }

};



template <class T>
class Derived:public Base<T>{
    T c;

    public:
    void set(T x, T y, T z){
        Base<T>::set(a,b);
       this-> c=z;
    }

    void show(){
       Base<T>::show();
       cout<<z<<endl;
    }
};


int main(){
    cout<<"Integer type number"<<endl;
    Derived<int>d1;
    d1.set(1,2,3);
    
    return 0;
}