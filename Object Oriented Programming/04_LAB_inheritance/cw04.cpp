/*Define a class Team with data member Team_name and captain. Define another class Cricketer with data
member name and age which inherits class Team. Define another class Allrounder with data members
runs, wickets and catches.WAP to implement multilevel inheritance*/

#include<iostream>
using namespace std;

class Team{
    string  Team_name, captain;
    public:

    void getteam(){
        Team_name="Alpha";
        captain="Riwaz";
    }
    void showteam(){
        
        cout<<"The team name is:"<<Team_name<<endl;
        cout<<"The team captain is:"<<captain<<endl;
    }

};

class cricketer:public Team{
    string name;
    int age;
    public:

    void getcricketer(){
         getteam();
         name="Jenish Pyakurel";
         age=20;
}
   void showcricketer(){
   
      cout<<"The name of cricketer is:"<<name<<endl;
      cout<<"The age of cricketer is:"<<age<<endl;
   }

};

class Allrounder:public cricketer{
    int runs,catches,wickets;

    public:

    void getallrounder(){
       /* getteam();
        getcricketer();*/
        runs=350;
        catches=4;
        wickets=6;
    }

    void showallraounder(){
         showteam();

        showcricketer();

        cout<<"The run is:"<<runs<<endl;
        cout<<"The catches is:"<<catches<<endl;
        cout<<"The wickets is:"<<wickets<<endl;

    }

};

int main(){
    Allrounder a;
    a.getteam();
    a.getcricketer();
    a.getallrounder();

    a.showallraounder();
    return 0;
}
