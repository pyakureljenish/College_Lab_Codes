//Formatted input and output can be interpreted as WUFPS i.e width unsetf,fill,precison,setf
#include<iostream>
using namespace std;
int main(){
    /*cout<<"jenish";
    cout.width(20);
    cout<<"pyakurel";

    float j=4.5646461;
   cout.precision(5);
   cout<<j;

   string t="jenish";
   cout.fill('/');
   cout.width(10);
   cout<<t;*/

   string j="jenish";
   cout.fill('*');
   cout.setf(ios::left,ios::adjustfield);
   cout.width(20);
   cout<<j;
   cout<<endl;
   cout.unsetf(ios::left);
   cout<<j;


    return 0;
}