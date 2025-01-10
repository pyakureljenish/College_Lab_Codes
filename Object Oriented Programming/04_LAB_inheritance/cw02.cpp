/*Define a class Cricketer with data member name, team. Define a class Batter with data member runs,
century and class BOWLER with data member wickets which inherits from class Cricketer. WAP to
implement hierarchical inheritance.*/

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
         getdata1();

          runs=304;
          century=2;
       
    }
    
     void showdata2(){
         
         showdata1();

          cout<<"The run is:"<<runs<<endl;
      
        
        cout<<"The century is:"<<century<<endl;
      
         
     }
};

     class bolwer: public cricketer {
        int wickets;
        public:

        void getdata3(){
            getdata1();
            wickets=5;
        }

        void showdata3(){
            
            cout<<"The number of wicket is:"<<wickets<<endl;
        }

     };
     
    


int main() {
    
    batter b;
    bolwer bb;

    b.getdata2();
    b.showdata2();

    bb.getdata3();
    
    bb.showdata3();


    return 0;
}