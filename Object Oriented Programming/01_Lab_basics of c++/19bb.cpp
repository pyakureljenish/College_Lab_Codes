#include<iostream>
using namespace std;
void func();
static int y=30;
int main(){
    func();
    func();
    func();
    return 0;
}

void func(){
    static float z=8.5;
    z--;
    cout<<"z="<<z<<endl;
    cout<<"y="<<y<<endl;
}