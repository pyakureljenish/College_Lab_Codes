/*WAP to create a class Player with data members p_id, p_game, p_age. 
Display details of players using default and parameterized constructor.*/
#include<iostream>
#include<cstring>
using namespace std;
class player{
    private:
    int p_id,age;
    string game;
public:
    player(int id=11,int year=19,string play){
        p_id=id;
        age=year;
        game=play;
    }
    void display(){
        cout<<"ID="<<p_id<<endl;
        cout<<"AGE="<<age<<endl;
        cout<<"Game"<<game<<endl;
    }

};
int main(){
    player p1;
    p1.display();
    return 0;
    
}
