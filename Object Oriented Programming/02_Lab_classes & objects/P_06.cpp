#include<iostream>
using namespace std;
class laptop{
    string brand;
    int price,storage;
public:
laptop(){
    cout<<"Yo! DEFAULT CONSTRUCTOR"<<endl;
    brand="intel";
    price=100000;
    storage=1000;
    cout.flush();
}

laptop(string b,int p,int s){
    cout<<"Yo! PARAMETERIZE CONSTRUCTOR"<<endl;
    brand=b;
    price=p;
    storage=s;
    cout.flush();
}


laptop(laptop &l){
        cout<<"YO! COPY CONSTRUCTOR"<<endl;
     brand =l.brand;
     price=l.price;
     storage=l.storage;
    }

    void show(){
        cout<<"Brand="<<brand<<endl;
        cout<<"Price="<<"$"<<price<<endl;
        cout<<"storage="<<storage<<"gb"<<endl;
    }


};
int main(){
    laptop l1;
    laptop l2("apache",2000,130);
    laptop l3=l2;



    l1.show();
    l2.show();
    l3.show();
    return 0;
}