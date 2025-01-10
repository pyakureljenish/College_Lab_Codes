/*Define a class Calculator with member function calculate() with no implementation. Derive 3 classes as:
 Addition to add 2 numbers
 Subtraction to subtract 
 Multiplication to multiply*/

#include<iostream>
using namespace std;
class Calculator{
    public:
   virtual void calculate ()=0;
};

class Addition:public Calculator{
  int n1,n2;
  public:
  Addition(int a,int b){
    n1=a;
    n2=b;
  }
  void calculate(){
    int sum=n1+n2;
    cout<<"Addition="<<sum<<endl;
  }
  
};

class Subtraction:public Calculator{
    int n1,n2;
  public:
  Subtraction(int a,int b){
    n1=a;
    n2=b;
  }
  void calculate(){
    int sub=n1-n2;
    cout<<"Subtraction="<<sub<<endl;
  }

};

class Multiply:public Calculator{

int n1,n2;
  public:
  Multiply(int a,int b){
    n1=a;
    n2=b;
  }
  void calculate(){
    int mul=n1*n2;
    cout<<"Multiplication="<<mul<<endl;
  }
};

int main(){
    Calculator *ptr;

    Addition a(40,50);
    ptr=&a;
    ptr->calculate();

    Subtraction c(40,50);
    ptr=&c;
    ptr->calculate();

    Multiply m(45,2);
    ptr=&m;
    ptr->calculate();


    return 0;
}