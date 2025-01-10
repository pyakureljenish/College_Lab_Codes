/*WAP to create a class Book with data members b_id, b_title, b_price. 
Read and display details of 3 books using constructor.*/

#include<iostream>
using namespace std;
class constructortest{
    int b_id;
    float b_price;
    char b_title;
public:
    constructortest(){
        cout<<"Enter the price of the book"<<endl;
        cin>>b_price;
        
        cout<<"Enter the id of the book"<<endl;
        cin>>b_id;

        cout<<"Enter the title of the book"<<endl;
        cin>>b_title;
    }
    void display(){
        cout<<"PRICE="<<b_price<<endl;
        cout<<"ID="<<b_id<<endl;
        cout<<"Name="<<b_title<<endl;
    }

};

int main(){
    constructortest c;
    c.display();
    return 0;
}