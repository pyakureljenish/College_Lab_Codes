/*Define a class Sport with data member sport_name,playerCount and class Team with data member
team_name as two base classes. Define a class Player with data member name and age which inherits
from both base class. WAP to implement multiple inheritance.*/

#include<iostream>
using namespace std;

class sports{
    string sports_name;
    int player_count;
  
  public: 
    void getdata1(){
        
         sports_name="Cricket";
    player_count=12;
 }
 
 void showdata1(){
     cout<<"The name of sports is:"<<sports_name<<endl;
     cout<<"The player count is:"<<player_count<<endl;
}
    
    
};

class team:public sports{
    string team_name;
    
public: 

    void getdata2(){
        team_name="Kolkatta Knight Riders";
}
    
    void showdata2(){
        
        cout<<"The name of the player team is"<<team_name<<endl;
}
    
};

class player:public sports,public team{
    string name;
    int age;
    
      public: 
    void getdata3(){
        name="Virat Koli";
        age=30;
        
    }
    
    void showdata3(){
        showdata2();
        showdata1();
        
    cout<<"The name of the player is:"<<name<<endl;
        cout<<"The age of the player is:"<<age<<endl;
    }
    
};

int main(){
    player p;

    p.getdata1();
     p.getdata2();
      p.getdata3();
      p.showdata3();
      return 0;
}



