//operator function returning the object

#include<iostream>
using namespace std;
class Test{
private:
int value;
public:
Test(){
    value=5;
}

Test operator ++(){
    Test t1;
    t1.value=++value;
    return t1;
}



Test operator ++(int){
    Test t1;
    t1.value=++value;
    return t1;
}

void display(){
    cout<<value<<endl;
}

};
int main(){
    Test t1,t2;
    t2=++t1;
    t2.display();

    t2=t1++;
    t2.display();

    return 0;
}