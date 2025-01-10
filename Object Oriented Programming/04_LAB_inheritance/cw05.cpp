/*Define a class Team with data member Team_name and captain. Define class Player with data member
name and age which inherits class Team. Define a class coach with data member name and age which
also inherits class Team. Define class Cricketer with data member totalMatches which inherits calss Player.
Define a class batter with data member runs and century which inherits class Cricketer. WAP to
implement hybrid inheritance.*/

#include<iostream>
using namespace std;
class Team{
    string Team_name,captain;
public:
    void getTeam(){
        Team_name="Nepal Cricket Team";
         captain="Rohit Kumar Paudel";
    }
    void showTeam(){
        cout<<"Team Name="<<Team_name<<endl;
        cout<<"Captain name="<<captain<<endl;
    }
};

class player:public Team{
    string name;
    int age;

    public:
    void getPlayer(){
        getTeam();
        name="Sompal";
        age=27;
    }

    void showPlayer(){
        showTeam();
        cout<<"Name of player="<<name<<endl;
        cout<<"Age of player="<<age<<endl;
    }
};

class coach:public Team,public player{
    string name;
    int age;
    public:
    void getCoach(){
       getPlayer();
       name="Monti Desai";
       age=54;
    }

    void showCoach(){
        showPlayer();
       cout<<"Name of coach="<<name<<endl;
       cout<<"Age of coach="<<age<<endl<<endl;
    }
};

class cricketer:public player{
    int totalMatches;
    public:
    void getCricketer(){
        getPlayer();
        totalMatches=3;
    }

    void showCricketer(){ 
        showPlayer();
        cout<<"Total Matches="<<totalMatches<<endl<<endl;
    }
    

};

class batter:public cricketer{
    int runs,century;
    public:
    void getBatter(){
        getCricketer();
        runs=160;
        century=2;
    }
    void showBatter(){
        showCricketer();
        cout<<"Runs="<<runs<<endl;
        cout<<"Century="<<century<<endl;
    }

};



int main(){
    coach c;
    /*c.getPlayer();
    c.showPlayer();*/
    c.getCoach();
    c.showCoach();

    cout<<"The cricketer detail is:"<<endl<<endl;

    cricketer cc;
    cc.getCricketer();
    cc.showCricketer();

    cout<<"The batter detail is:"<<endl<<endl;

    batter b;

    b.getBatter();
    b.showBatter();
    return 0;

}