/*WAP create a class Semester2 with subjects name as its data members. 
Read marks of each subject, calculate total and average marks and 
display output. Make proper use of member function definition inside 
and outside class*/
#include<iostream>
using namespace std;
class semester2{
    const char*OOP,*MP,*DS,*MTH,*STAT;
    float m_OOP,m_MP,m_DS,m_MTH,m_STAT ,total,average;

    public:
    void getdata(){
        cout<<"Enter marks in OOP:"<<endl;
        cin>>m_OOP;

        cout<<"Enter marks in MP:"<<endl;
        cin>>m_MP;

        cout<<"Enter marks in DS:"<<endl;
        cin>>m_DS;

        cout<<"Enter marks in MTH"<<endl;
        cin>>m_MTH;

        cout<<"Enter marks in STAT"<<endl;
        cin>>m_STAT;

    }

    void showresult();
};

 void semester2:: showresult(){
    total=m_OOP+m_MP+m_DS+m_MTH+m_STAT;
    average=total/5;

    cout<<"The total marks is:"<<total<<endl;
    cout<<"The average marks is:"<<average<<endl;
 }

 int main(){
    semester2 s;
    s.getdata();
    s.showresult();
    return 0;
 }