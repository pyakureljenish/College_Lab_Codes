/*WAP to create a class MyFirstClass with data members my_Id, 
my_name, my_Sem and member functions getMe() and showMe()*/
#include<iostream>
using namespace std;
class MyFirstClass{
private:
int my_id;
const char *my_name;
const char *my_semester;

public:
void getMe(int id,const char *name,const char *sem ){

  my_id=id;
  my_name=name;
 my_semester=sem;
}

void showme(){

    cout<<"The ID of the student is:"<<my_id<<endl;
cout<<"The Name of the student is:"<<my_name<<endl;

cout<<"The semester of the student is:"<<my_semester<<endl;
}

};

int main(){
    MyFirstClass c;

    c.getMe(75, "JenishPyakurel","second");
    c.showme();
    return 0;
}