/*WAP to create a class Employee with data members e_id, e_post, 
e_salary and display details*/
#include<iostream>
using namespace std;
class product{
    private:
    int p_id,p_price;
    const char *p_name;

public:
void getproduct(int id,int price,const char*name);
void showproduct();
};

void product::getproduct(int id,int price,const char*name){
   p_id=id;
   p_price=price;
   p_name=name;
}

void product:: showproduct(){
     cout<<"Id="<<p_id<<endl;
      cout<<"price="<<p_price<<endl;
    cout<<"Name="<<p_name<<endl;
   
   
}

int main(){
    cout<<"YO THIS PROGRAM IS FOR THE DEMONSTRATION OF THE MEMBER FUNCTION OUTSIDE THE CLASS"<<endl;
    product p;
    p.getproduct(77,505,"Beta 2.0");
    p.showproduct();
    return 0;
}


