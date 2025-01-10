/*WAP to create a class Employee with data members e_id, e_post, 
e_salary and display details*/

#include<iostream>
#include<cstring>
using namespace std;
class Employee{
    public:
    int e_id;
    string post;
    float salary;

/*public:
    void getdata(int id, string pst, float slry){
        e_id= id;
        post= pst;
         salary=slry;

    }*/

    void showdata(int e_id,string post,float salary){
        cout<<"The id="<<e_id<<endl;
        cout<<"Post="<<post<<endl;
        cout<<"Salary="<<salary;
    }
};

int main(){
    Employee e;
    //e.getdata(999,"SWE",55000);
    e.showdata(999,"SWE",55000);
    return 0;
}
