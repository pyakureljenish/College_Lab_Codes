/*Define a class Admission with data members students Id (id), students name (name),
department(depart) and college(college).Create several number of admission instances. 
Display total number of new admissions and student details.*/

#include<iostream>
class Admission{
int id;
string name,department,college;

void getAdmission(){
    cout<<"ID="<<endl;
    cin>>id;
    cout<<"Name="<<endl;
    cin>>name;
    cout<<"Department"<<endl;
    cin>>department;
    cout<<"College"<<endl;
    cin>>college;

}

void showAdmission(){
    cout<<"College Name="<<college<<endl;
    cout<<"Department="<<department<<endl;
     cout<<"Name="<<name<<endl;
      cout<<"ID="<<id<<endl;
}

void operator ++(){
       Admission e;
       e++;
}
};

using namespace std;
int main(){
    Admission a;
    for(int i=0;i<)
    return 0;
}