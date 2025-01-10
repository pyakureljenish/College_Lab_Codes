#include<iostream>
using namespace std;
class player {
 string playerName;
 int playerTeam,playerRuns;

public:
player(string name,int team,int runs);
 void showdata();


};

player::player(string name,int team,int runs){
 /*cout<<"Name:";
 cin>>playerName;*/
 
 /*playerName=name;
 playerTeam=team;
 playerRuns=runs;*/
    

    playerName="Jenish";
    playerTeam=7;
    playerRuns=495;
}

void player::showdata(){
    cout<<"The Player name is"<<playerName<<endl;
     cout<<"The Player team is"<<playerTeam<<endl;
      cout<<"The Player run is"<<playerRuns<<endl;

}

int main(){
    player p("Jenish",07,495);
    p.showdata();
    return 0;
}