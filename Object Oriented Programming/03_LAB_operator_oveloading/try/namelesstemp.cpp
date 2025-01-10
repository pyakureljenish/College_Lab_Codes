//This is the program to demostrate the use of the nameless temporary object

#include<iostream>
using namespace std;

class Test{
   int score;
   public:
   Test(){}
   Test(int s){
    score=s;
   }

   Test operator ++(){
    score++;
    //return Test(score);
   }

   void show(){
    cout<<"Score="<<score<<endl;
   }
};

int main(){
    Test t1(25),t2,t3;
    cout<<"before using the operator overloading"<<endl;
    t1.show();

        t2=++t1;
        
        cout<<"after using the operator overloading"<<endl;
     t2.show();
    return 0;
}
