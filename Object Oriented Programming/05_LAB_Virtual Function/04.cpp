/*Define necessary member functions or constructors to read data and display output. WAP to implement 3 functionality and show each output.
4. Define a class Organization with data members org_name. From this class derive two classes
 Class Department with data members dept_name
 Class Branch with branch_name
 From these 2 class derive another class Employee with data member e_name and e_post
Define necessary functions or constructors to read data and display output. WAP to implement virtual base class concept and display employee details.*/

#include<iostream>
using namespace std;

class Organization{
    protected:
string org_name;
public:

Organization(){
    org_name="Deerwalk";
}

void show(){
cout<<"Organization Name="<<org_name<<endl;
}

};

class Department:virtual public Organization{
string  dept_name;
public:

Department(){
  dept_name="Software Developer";
}

void show(){
     Organization::show();
    cout<<"Department Name="<<dept_name<<endl;
}

};

class Branch:virtual public Organization{
  string   branch_name;
  public:
  Branch(){
  branch_name="Kathmandu";
  }
  void show(){
     Organization::show();
    cout<<"Branch Name="<<branch_name<<endl;
  }

};

class Employee:public Department,public Branch {
    string e_name, e_post;
    public:
    Employee(){
    e_name="Ashok Pandey";
    e_post="Singhdurbar";
    }

    void show(){
       
        Department::show();
        Branch::show();
        cout<<"Employee Name="<<e_name<<endl;
        cout<<"Employee post="<<e_post<<endl;
    }

    
};

int main(){
    Employee e;
    e.show();
    return 0;

}