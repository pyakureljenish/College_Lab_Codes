/*Define a class Player with data members name and sportsName. Define a class Cricketer with 
data members runs and wickets. Define another class Footballer with data members goals and 
assists. Both the class Cricketer and Footballer are derived from class Player. Define necessary 
constructors or member functions. Display players data using concept of base class pointer*/

#include<iostream>
using namespace std;
class Player{
    string name,sportsName;
    public:
    Player(string n,string sn){
           name=n;
           sportsName=sn;
}
    void showPlayer(){
        cout<<"Name="<<name<<endl;
        cout<<"Sports Name="<<sportsName<<endl;
    }
    
};

class cricketer:public Player{
    int runs ,wickets;
    public:
    cricketer(string n,string sn,int r,int w):Player(n,sn){
        runs=r;
        wickets=w;
        
} 

  void showCricketer(){

    cout<<"Runs="<<runs<<endl;
    cout<<"Wickets="<<wickets<<endl;
  }
    
};

class Footballer:public Player{
    int goals;
    string assist;
    public:

    Footballer(string n,string sn,int g,string a):Player(n,sn){
        goals=g;
        assist=a;
}
 
 void showFootballer(){
    cout<<"Goals="<<goals<<endl;
    cout<<"Assit="<<assist<<endl;
}
 };

 int main(){
    cricketer *ptr;

    cricketer c("Mahendra Singh Dhoni","Cricket",345,4);
    c.showPlayer();
    ptr=&c;
    ((cricketer*)ptr)->showCricketer();

    Footballer f("Pele","Football",4,"goal");
    //f.showPlayer();
    Footballer *ptrr;
    ptrr=&f;
    ((Footballer*)ptrr)->showFootballer();

    return 0;
}