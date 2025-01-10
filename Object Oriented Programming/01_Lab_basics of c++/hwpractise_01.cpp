/*WAP to define a class Team with data members name, captain and country. Define a friend function showTeam() to display teams 
details*/
#include<iostream>
using namespace std;
class team{
    string name,captain,country;
    public:
    team(){
        name="k";
        captain="kl";
        country="kkl";
    }
    friend void displayteam(team t);

};

void displayteam(team t){
  cout<<t.name;
  cout<<t.captain;
  cout<<t.country;
}

int main(){
    team t;
    displayteam(t);
    return 0;
}