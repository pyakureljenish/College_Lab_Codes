/*Define a class employee with data members id,name and post.Define another class
salary with data members basic salary and gradesalary
WAP to implement the containership concept*/

#include<iostream>
using namespace std;
class employee{
    int id;
    string name,post;
    public:
    void getemployee(){
         id=06;
         name="Ashok Pandey";
         post="Professor";
    }
    void showemployee(){
       cout<<"Employee id="<<id<<endl;
       cout<<"Name="<<name<<endl;
       cout<<"Post="<<post<<endl;
    }

};
class salary{
    int basic_salary ,grade_salary;
    employee e;
    public:
    void getsalary(){
        basic_salary =15000;
        grade_salary=25000;
        e.getemployee();
    }
    void showsalary(){
        cout<<"The basic salary is:"<<basic_salary<<endl;
        cout<<"The grade salary is:"<<grade_salary<<endl;
         e.showemployee();
    }


};

int main(){
    salary s;
    
    s.getsalary();
    s.showsalary();
    return 0;

}