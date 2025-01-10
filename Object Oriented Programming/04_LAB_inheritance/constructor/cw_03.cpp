/*Define a class Employee with data members id, name and post. Define another class Project 
with data members title, duration and domain(eg. Agro, hydro). define necessary member 
functions to implement Employee has a project relationship and display output. */

#include <iostream>
using namespace std;
class Employee {
    int id;
    string name;
    string post;
    public:
   void  getEmployee(){
        name="Jenish Pyakurel";
        post="Junior Software developer";
        id=0666;
        
    }
    
    void showEmployee(){
        cout<<"ID="<<id<<endl;
        cout<<"Name="<<name<<endl;
        cout<<"Post="<<post<<endl;
    }
    
};
class Project{
    
    string title,domain;
    int duration;
    Employee e;
    
    public:
    void getProject(string t,string d,int du){
        title=t;
        domain=d;
        duration=du;
        e.getEmployee();
    }
    
    void showProject(){
        e.showEmployee();

        cout<<"Title="<<title<<endl;
        cout<<"Domain="<<domain<<endl;
        cout<<"Duration="<<duration<<"year"<<endl;
    }
    
};


int main() {
    Project p;
    p.getProject("App Development","Bluehost",1);
    p.showProject();
    
    return 0;
}

/*In case of the containership problem try not to use the constructor
and so on and so forth things*/