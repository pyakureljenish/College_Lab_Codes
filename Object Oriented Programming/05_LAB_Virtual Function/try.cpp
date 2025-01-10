#include<iostream>
using namespace std;
class Employee{
  public:
  virtual void show(){
    cout<<"Ashok sir is a employee";
   }
};

class Engineer:public Employee{
  public:
void show(){
    cout<<"Jenish is a Engineer";
}
};

class Doctor:public Employee{
  public:
  void show(){
    cout<<"Jenish's wife is a doctor";
  }
};

int main(){
 Employee *bptr;
 Employee ee;
 Engineer e;
 Doctor d;
 bptr=&e;
 bptr->show();
  //((Engineer*)bptr)->show();
    return 0;

}