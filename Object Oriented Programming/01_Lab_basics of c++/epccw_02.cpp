//This is the program to convert the seconds into minutes hour

#include<iostream>
using namespace std;
int main(){

    int s;
    float h,m,sec;
    cout<<"Enter the seconds"<<endl;
    cin>>s;

    h=s/3600;
    m=s/60;
    sec=s-m*60-h*3600;


    cout<<s<<"="<<h<<"hr:"<<m<<"min:"<<sec<<"sec";
    return 0;
}
