#include<iostream>
using namespace std;
class student{
int id;
string name;
float gpa;

public:
void getstudent(){
    cout<<"ID=";
    cin>>id;
    cout<<"Name=";
    cin>>name;
    cout<<"GPA=";
    cin>>gpa;
}

void showstudent(){
    cout<<"Name of student"<<name<<endl;
     cout<<"ID of student"<<id<<endl;
      cout<<"GPA of student"<<gpa<<endl;
}

};
int main(){
    student s1,s2;
    s1.getstudent();
    s1.getstudent();

    s1.showstudent();
    s2.showstudent();


    return 0;
}