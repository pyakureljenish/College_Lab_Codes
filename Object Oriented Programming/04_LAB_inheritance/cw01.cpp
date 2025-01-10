/*Define a class Cricketer with data member name, team. Define a class Batter with data member runs,
century which inherits from class Cricketer. WAP to implement single inheritance.*/

#include <iostream>
using namespace std;

class cricketer{
    string name,team;
    
    public:
    void getdata1(){
          name="Dhoni";
               team="India";
        
   }
    void showdata1(){
       
       cout<<"The name of the cricketer is:"<<name<<endl;
      
         cout<<"The name of the team is:"<<team<<endl;
}
};



class batter: public cricketer{
    int runs,century;
    
    public:
    
    void getdata2(){
          runs=304;
          century=2;
       
    }
    
     void showdata2(){
         
          cout<<"The run is:"<<runs<<endl;
      
        
        cout<<"The century is:"<<century<<endl;
      
         
     }
     
    
};


int main() {
    
    batter b;
    
    b.getdata1();
    b.getdata2();
    
    b.showdata1();
    b.showdata2();
    
    return 0;
}