#include <iostream>
using namespace std;
int check(int a,int b){
    if(a%b==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
  

cout<<"YO! LETS CHECK"<<endl<<check(15,4);

    return 0;
}