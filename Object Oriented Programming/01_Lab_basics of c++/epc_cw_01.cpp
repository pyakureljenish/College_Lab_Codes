#include<iostream>
using namespace std;
int main(){
    int d ,mth,days;
    cout<<"enter the no of days"<<endl;
    cin>>d;

    mth=d/30;
    days=d-30*mth;

cout<<"The month is"<<mth<<endl;

cout<<"The days is:"<<days;
return 0;
}