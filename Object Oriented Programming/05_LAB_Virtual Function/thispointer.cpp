/*Demonstration of the this pointer for the 
distinguish between the local variables and the data members
#include<iostream>
using namespace std;
class teacher{
 int id;
 float height;
public:

 teacher(int id,float height){
    this->id=id;
    this->height=height;

 }

 void show(){
    cout<<id<<height<<endl;
    cout<<"Address"<<this<<endl;//This pointer also holds the address of the current object i.e t object.
 }
};
int main(){

    teacher t(1,1.5);
    t.show();

    return 0;
}*/



/*Demonstration of the this pointer to access data member

#include<iostream>
using namespace std;
class teacher{
 int id;
 float height;
public:

 teacher(int id,float height){
    this->id=id;
    this->height=height;

 }

 void show(){
    cout<<this->height<<endl;
    cout<<this->id<<endl;
 }
};
int main(){

    teacher t(1,1.5);
    t.show();

    return 0;
}*/



/*Demostration of the this pointer to call the member function

#include<iostream>
using namespace std;
class teacher{
 int id;
 float height;
public:

 teacher(int id,float height){
    this->id=id;
    this->height=height;

 }

 void show(){
 cout<<this->height<<endl;
    cout<<this->id<<endl;
 }    

 void display(){
    //this->show();
    show();
 }



 };
int main(){

    teacher t(1,1.5);
    t.display();

    return 0;
}
*/



//Demostration of the this pointer to return the object

#include<iostream>
using namespace std;
class teacher{
 int id,salary;
 float height;
public:

 teacher set(int id,float height,int salary){
    this->id=id;
    this->height=height;
    this->salary=salary;
            //return *this;


 }

 void show(){
    cout<<this->id<<endl;
 cout<<this->height<<endl;
    
        cout<<this->salary<<endl;


 }    

  };
int main(){

    teacher t;
    /*t.set(1,1.5,500);
    t.show();*/

    teacher t1;
    t1=t.set(1,1.5,500);
    t.show();

    return 0;
}
