#include<iostream>
using namespace std;
class department{
    int deptId;
    string deptName,deptHead;
    public:
    department(){
        deptId=2007;
            deptName="CSIT";
            deptHead="Jenish Pyakuel";
}
void display(){
    cout<<"The department id is "<<deptId<<endl;
    cout<<"The department name is "<<deptName<<endl;
    cout<<"The department head is "<<deptHead<<endl;
}


};
int main(){
    department d;
    d.display();

    return 0;
}