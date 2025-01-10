/*Define a class Player with data members name and country and member function display(). Derive 3 classes from this class as follows:
 class Cricketer data members runs and wickets, 
 class Footballer with data members goals 
 class TennisPlayer with data member grandslam_count.
Define necessary functions or constructors to read data and display output. Wap to implement runtime polymorphism to display details of all three Players*/

#include<iostream>
using namespace std;
class Player{
    string name,country;
    public:
    Player(){
        name="Dhoni";
        country="India";

    }
    virtual void show(){
        cout<<"Name="<<name<<endl;
        cout<<"Country="<<country<<endl;
    }

};

class Cricketer:public Player{
    int runs,wickets;
    public:

    Cricketer(): Player(){
        runs=505;
        wickets=6;

    }

   void show(){
    //function overridding.
     Player::show();
      cout<<"Runs="<<runs<<endl;
      cout<<"Wickets="<<wickets<<endl;
   }

};

class Footballer:public Player{
    int goals;
    public:
    Footballer(){
        goals=11;

    }
   void show(){
    cout<<"Goals="<<goals<<endl;
   }

};

class TennisPlayer:public Player{
    int grandslam_count;
    public:
    TennisPlayer(){
        grandslam_count=7;
    }
    void show(){
           cout<<"Grandslam Count="<<grandslam_count<<endl;
    }
};

int main(){
    Player *bptr;
    Cricketer c1;
    bptr=&c1;
    bptr->show();

    Footballer f;
    bptr=&f;
    bptr->show();

    TennisPlayer t;
    bptr=&t;
    bptr->show();


 

    return 0;
}