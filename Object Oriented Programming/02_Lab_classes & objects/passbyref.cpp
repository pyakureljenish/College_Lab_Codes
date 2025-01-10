#include<iostream>
using namespace std;
void passbyref(int &x){
    x=40;
    cout<<"Function Value="<<x<<endl;
}
int main(){
    int x=10;
    passbyref(x);
    cout<<"Int main Value="<<x<<endl;
    return 0;
}