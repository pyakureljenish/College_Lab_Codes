/*WAP to create a class Product with data members p_id, p_name, 
p_price. Read data from user and display details of products using copy 
constructor*/

#include<iostream>
using namespace std;
class product{
    private:
   int p_id;
   string p_name;
    float p_price;

    public:
    product(){
        cout<<"ID:"<<endl;
        cin>>p_id;

        cout<<"PRODUCT NAME:"<<endl;
        cin>>p_name;

        cout<<"PRICE:"<<endl;
        cin>>p_price;
}

void showdata(){
    cout<<"ID:"<<p_id<<endl;
    cout<<"PRODUCT NAME:"<<p_name<<endl;
    cout<<"PRICE:"<<p_price<<endl;
}

};

int main(){
    product p;
    p.showdata();
    return 0;
}