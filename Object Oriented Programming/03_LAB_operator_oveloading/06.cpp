/* Define two classes Exam1 with data member’s sub1, sub2 and Exam2 with data 
member’s sub1, sub2. Define a member function totalMarks() as friend function to 
calculate total marks of 4 different subjects and display total marks.
6. */

#include<iostream>
using namespace std;
class exam2;

class exam1{
    int sub1,sub2;

  public:

  exam1(){
    sub1=97;
    sub2=99;
  }
friend class exam2;
};

class exam2{
   int sub3,sub4;
public:
   exam2(){
    sub3=96;
    sub4=94;
   }

   void totalMarks(exam1 e){
    int total=e.sub1+e.sub2+sub3+sub4;
    cout<<"The total marks is:"<<total<<endl;
   }

   /*void showTotal(){
    cout<<"The total marks is:"<<total<<endl;
}*/
};

int main(){
 
 exam1 e;
 exam2 ee;
 ee.totalMarks(e);
    return 0;

}

