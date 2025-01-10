/*WAP to define two classes 
a. Exam1 data members sub1, sub2 and
b. Exam2 with data members sub1, sub2 
c. Define a member function totalMarks() as friend function to calculate total marks of 4 different subjects.
d. Display totalMarks*/

#include<iostream>
using namespace std;
class Exam2;

class Exam1{
   int sub1,sub2;
   public:
   void getmarks1(){
          sub1=99;
          sub2=95;
}

friend void getexam(Exam1,Exam2);

};

class Exam2{
int sub1,sub2;
public:

void getmarks2(){
          sub1=95;
          sub2=96;
}

   friend void getexam(Exam1,Exam2);

};

 

 void getexam(Exam1 e1,Exam2 e2){
         int total=e1.sub1+e1.sub2+e2.sub1+e2.sub2;
         cout<<"The total marks is:"<<total;
}


int main(){
    Exam1 e1;
    Exam2 e2;
    e1.getmarks1();
    e2.getmarks2();
    getexam(e1, e2);
   
    return 0;
}