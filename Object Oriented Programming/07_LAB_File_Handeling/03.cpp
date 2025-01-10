/*Define a class Player with data members name, sports and country. WAP to input
details of 5 players and write into file player.txt. Also read that data and print on 
screen*/

#include<iostream>
#include<fstream>
using namespace std;
class player{
  private:
          string name,sports,country;
    public:
    void get(){

    
    cout<<"Name of player:"<<endl;
    cin>>name;

    cout<<"Sports played:"<<endl;
    cin>>sports;

    cout<<"Country Name:"<<endl;
    cin>>country;
}

    void show(){
        cout<<"Name:"<<name<<endl;
        cout<<"Sports:"<<sports<<endl;
        cout<<"Country:"<<country<<endl;

 }

};
int main(){
    int i;
    fstream fileobj;
    player p[i];
   
    fileobj.open("player.txt",ios::out);

    if(!fileobj){
        cout<<"There is no file"<<endl;
    }

    else{
         for(int i=0;i<5;i++){
        p[i].get();
         p[i].show();
}

    /*for(int i=0;i<5;i++){
        p[i].show();
    }*/
}
    fileobj.close();


    return 0;
}