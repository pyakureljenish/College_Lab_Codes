#include<iostream>
using namespace std;
template <class T>
class base{
    protected:
    T x,y;
    public:
    void set(T a, T b){
        x=a;
        y=b;
    }

    void show(){
        cout<<x<<endl;
        cout<<y<<endl;
    }

};

template <class T>

class Derived:public base<T>{
    protected:
    T z;
    public:
    void set(T a, T b, T c){
        base<T>::set(a,b);
        z=c;
    }

    void show(){
        base<T>::show();
        cout<<"z="<<z<<endl;
    }
};

int main(){

    cout<<"Integer type numbers"<<endl;
    Derived<int>d1;
    d1.set(1,2,3);
    d1.show();

    
    cout<<"Double type numbers"<<endl;
    Derived<double>d2;
    d2.set(1,2,3);
    d2.show();


    cout<<"String type numbers"<<endl;
    Derived<string>d3;
    d3.set("Jenish","Pyakurel","CAB");
    d3.show();

    return 0;
}