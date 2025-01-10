/*WAP to define two classes: 
a. class Admin with data member Id, name, department of students and 
b. class Library with member function showStudent() 
c. Define a necessary member function showStudent() as friend function to display Student details using class Library*/

#include<iostream>
using namespace std;
class admin;//forward declaration

class library{
    friend void showStudent(admin);
};

class admin{
    int id;
    string name,department;
public:
   /* void getdata(int i,string n,string d){
             id=i;
             name=n;
             department=d;
        }*/

        admin(){
            id=005;
            name="jenish";
            department="CAB";
        }

          friend void showStudent(admin);
};

void showStudent(admin a){
    cout<<"Name="<<a.name<<endl;
    cout<<"id="<<a.id<<endl;
    cout<<"Department="<<a.department<<endl;

}

int main(){
    admin a;

    //a.getdata(005,"Jenish","CSIT");

    showStudent(a);

    return 0;
}