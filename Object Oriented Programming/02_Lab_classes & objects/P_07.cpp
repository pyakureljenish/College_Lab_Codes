#include<iostream>
using namespace std;

class employee{

    string name;

    int salary,hireDate;
    //currentDate;

public:
    employee(string n,int s,int h){
        name=n;
        salary=s;
        hireDate=h;
        //currentDate=c;
        
}
void operation(int hireDate,int currentDate){

int d=hireDate-currentDate;
cout<<"CurrentDate-HireDate="<<d<<endl;

}

void showdata(){
    cout<<"Name="<<name<<endl;
    cout<<"Salary="<<salary<<endl;
}

};

int main(){
    employee e("Jenish",100,2010);
    e.operation(2023,2010);

    e.showdata();

    return 0;
}