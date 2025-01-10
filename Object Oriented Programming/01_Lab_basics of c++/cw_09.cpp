/*WAP to demonstrate constructor overloading*/

#include<iostream>
using namespace std;
class result{
    string name;
    float marks;

    public:
    result(){
        marks=90.5;
        name="OOP";
    }
    //constructor overloaded
    result(float a){

        marks=a;
        name="OOP";

    }

     result(float a,string b){
        marks=a;
        name=b;
    }

    void showresult(){
        cout<<"Marks="<<marks<<"and"<<"Name="<<name<<endl;
    }
};

int main(){
    //Here the objects are made right here i.e r1,r2,r3

    result r1;
    result r2();
    result r3(93,"Mp");

    cout<<"YO Constructor overloading here"<<endl;
    r1.showresult();
    r2.showresult();
    r3.showresult();

 return 0;
}