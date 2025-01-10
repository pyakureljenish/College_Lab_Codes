/*WAP to create a class Student with data members student_id, Name, 
Library_Id as public data and display students data*/
#include<iostream>
#include<cstring>
using namespace std;
    class student{
        public:
       int student_id,Library_id;
       char name[20];

    void showd(){
        cout<<"The Name of the student is>>>>"<<name<<endl;

        cout<<"The Student id of the student is>>>"<<student_id<<endl;

        cout<<"The Library id of the student is>>>"<<Library_id<<endl;
    }
};

int main(){
    student s;

  strcpy(s.name,"Jenish Pyakurel");
    s.student_id=99;
    s.Library_id=88;
    
    s.showd();

    return 0;
}