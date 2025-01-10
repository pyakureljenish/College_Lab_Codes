#include<iostream>
using namespace std;
void passbyvalue(int x){
     x=30;
     cout<<"Function value"<<x<<endl;
}

int main(){
    int x=10;
    passbyvalue(x);
    cout<<"Int main value="<<x<<endl;
    return 0;
}