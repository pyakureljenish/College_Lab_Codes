#include<iostream>
using namespace std;
class college{
    public:
    string name,location;

    void setcollege(){
        name="College of Applied Business and Technology";
        location="Chabahil";

    }

     void showcollege(){
        cout<<"Name="<<name<<endl;
        cout<<"Location="<<location<<endl;
    }

};
int main(){
    college c;
    c.setcollege();
    c.showcollege();
    return 0;
}