#include<iostream>
using namespace std;
class semester2{
    string studentName,OOP,MP,DS;
    
    public:
    semester2(){};

    semester2(int OOP,int MP, int DS){
        
        cout<<"Name=";
        cin>>studentName;
        cout<<"Marks in OOP="<<endl;
        cin>>OOP;
        cout<<"Marks in MP="<<endl;
         cin>>MP;
        cout<<"Marks in DS="<<endl;
          cin>>DS;

      
}

void displaydata(int OOP,int MP, int DS){
  

  int OOP, MP,  DS;
  
    int total;
    float percentage;
     total=(OOP+MP+DS);
       percentage=(total/300)*100;

    cout<<"Name of Student="<<studentName<<endl;
    cout<<"Total marks obtained in OOP,MP,DS="<<total<<endl;
    cout<<"Total Percentage obtained="<<percentage<<endl;

}

        

};
int main(){
  semester2 s(int,int,int);
    //semester2 s(OOP, MP, DS);

    s.displaydata( );
    return 0;
}