//Define a class product with data member name and price.If your get 50% discount,what willl be the final price.Implement overloading of arithmetic operator(/)

#include <iostream>
using namespace std;
class product{
    private:
    string name;
    int price;
    
    public:
    product(){};
    product(string n,int p){
        name=n;
        price=p;
}

product operator /(product p){
    p.name=name;
    p.price=(p.price)/2;
    
    return p;
}

void showprice(){
    //cout<<"The Undiscounted price is="<<endl<<
    cout<<"The name is="<<name<<endl;
    
    cout<<"The Discounted price is="<<price<<endl;
    
}
    
};

int main() {
    product p1("jenish",300),p2;
    p2=p1.operator/(p1);
    p2.showprice();
    
    return 0;
}
