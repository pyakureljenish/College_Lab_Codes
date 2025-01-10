#include<iostream>
using namespace std;
template <typename t1,typename t2,typename t3>
void show(t1 a, t2 b,t3 c){
    cout<<"Type-1"<<a<<endl;
    cout<<"Type-2"<<b<<endl;
    cout<<"Type-3"<<c<<endl;

}  

int main(){
    
    show("Hello i am jenish",2003,11.10);
    

    show(11.3,20,"jenish");
    return 0;
    
}