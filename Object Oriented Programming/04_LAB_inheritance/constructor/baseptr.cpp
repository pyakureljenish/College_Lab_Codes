/*Define a class exam data members e-type(eg: Terminal/Final).Define a class result with data members sub1,su2,sub3 which inherits,
class exam WAP to calculate total marks and display exam and result details using concept of base class pointer and derived class object*/

#include<iostream>
using namespace std;
class exam{
    protected:
    string e_type;
    public:
    exam(string e){
       e_type=e;
    }
    void examtype(){
        cout<<"The type of exam is:"<<e_type<<endl;
    }

};
class result:public exam{
    int sub1,sub2,sub3;
    public:
   
   result(int s1,int s2,int s3):exam( e_type){
     /*s1=s;
     s2=ss;
     s3=sss;*/
    }
    void displaymarks(){
        int total=sub1+sub2+sub3;
        cout<<"The total marks is:"<<total<<endl;
    }

};
int main(){
    exam *ptr;
    exam e1("Terminal");
    result r(91,95,96);
    ptr=&e1;
    ((exam*)ptr)->examtype();

    ptr=&r;
    ((result*)ptr )->displaymarks();

 return 0;


}

