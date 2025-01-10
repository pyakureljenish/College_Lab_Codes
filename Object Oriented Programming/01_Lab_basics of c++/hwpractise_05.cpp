/*WAP to solve question 3 using friend class.
a. Exam1 data members sub1, sub2 and 
b. Exam2 with data members sub1, sub2 
c. Declare Exam2 as friend class of Exam1.
d. Define a member function totalMarks() to calculate total marks of two exams. 
e. Display total marks*/

#include<iostream>
using namespace std;
class Exam2;

class Exam1{
   int sub1,sub2;
   public:
   void getmarks1(){
          sub1=95;
          sub2=97;
}

friend class Exam2;

};

class Exam2{
      int sub1,sub2;

   public:

   void getdata(){
    sub1=99;
    sub2=98;
   }   

void totalMarks(Exam1 e){
    int total=e.sub1+e.sub2+sub1+sub2;
    cout<<"The total marks is:"<<total<<endl;
    
 }
};
int main(){
    Exam1 e;
    e.getmarks1();

    Exam2 e1;
    e1.getdata();
    e1.totalMarks(e);
    return 0;
}