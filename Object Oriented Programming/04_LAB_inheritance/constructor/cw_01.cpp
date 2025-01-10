/*Define a class Publication with data members name. Define class Book with data members Title, 
Author and price derived from class publication. Define necessary constructor and member 
functions to display details of two books*/

#include <iostream>
using namespace std;
class publication{
    string name;
    public:
    publication(string n){
      name=n;
    }
    void showPublication(){
        cout<<"Publication name="<<name<<endl;
    }
};

class Book:public publication{
   string   Title, Author;
int price;

public:
  Book(string n,string t,string a,int p):publication(n){
      Title=t;
      Author=a;
      price=p;
  }
  
  void showBook(){
      cout<<"Title of Book="<<Title<<endl;
      
       cout<<"Author of Book="<<Author<<endl;
       
        cout<<"Price of Book="<<price<<endl;
}
 };


int main() {
    Book b("Readmore","Mathematics","Dr. Simkhada",450);
    b.showPublication();
    b.showBook();
    
    return 0;
}