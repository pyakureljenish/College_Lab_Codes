/*This is the program to implement the overloading of the stream functionality

#include<iostream>
using namespace std;

class student{
    private:
    int id;
    float marks;

    public:
    student(int i,float m){
        id=i;
        marks=m;
    }

    friend ostream & operator <<(ostream &jenish,student st);

};

ostream & operator <<(ostream &jenish,student st){
    jenish<<"ID="<<st.id<<endl;
    jenish<<"Marks="<<st.marks<<endl;
    return jenish;

}

int main(){
    student s1(106,99),s2(106,98);
    cout<<"Student1 data"<<endl;
    cout<<s1;

     cout<<"Student2 data"<<endl;
    operator<<(cout,s2); //cout<<s2;
    return 0;
    
}*/
 


/*Program to demostrate the insertion operator

#include<iostream>
using namespace std;

class student{
    private:
    int id;
    float marks;

    public:
    student(){}
    student(int i,float m){
        id=i;
        marks=m;
    }

    void show(){
        cout<<"ID="<<id<<endl;
        cout<<"Marks="<<marks<<endl;
    }

    friend istream & operator >>(istream &out,student &st);

};

istream & operator >>(istream &jenish,student &st){
    cout<<"Enter the id"<<endl;
    jenish>>st.id;
  

    cout<<"Enter the marks:"<<endl;
    jenish>>st.marks;

}

int main(){
    student s1,s2;
    cout<<"The data of the student 1"<<endl;
    cin>>s1;
    s1.show();

    cout<<"The data of the student 2"<<endl;
    cin>>s2;
    s2.show();
    return 0;
}*/

//Program to demostrate the use of both insertion and the extraction operator


#include<iostream>
using namespace std;

class student{
    private:
    int id;
    float marks;

    public:
    student(){}
    /*student(int i,float m){
        id=i;
        marks=m;
    }*/

    /*void show(){
        cout<<"ID="<<id<<endl;
        cout<<"Marks="<<marks<<endl;
    }*/

    friend istream & operator >>(istream &jenish,student &st);

    friend ostream & operator<<(ostream &pyakurel,student &stt);

};

istream & operator >>(istream &jenish,student &st){
    cout<<"Enter the id"<<endl;
    jenish>>st.id;
  

    cout<<"Enter the marks:"<<endl;
    jenish>>st.marks;

}

ostream & operator<<(ostream &pyakurel,student &stt){

    pyakurel<<"The is:"<<stt.id<<endl;
    pyakurel<<"The marks is:"<<stt.marks<<endl;
    
}

int main(){
    student s1,s2;
    cout<<"The data of the student 1"<<endl;
    cout<<s1;
    cin>>s1;

    cout<<"The data of the student 2"<<endl;
    cout<<s2;
    cin>>s2;
    
    return 0;
}
