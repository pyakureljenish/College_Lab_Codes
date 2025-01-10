#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n,a[n],i,*p;
    p=&a[n];
    cout<<"Enter the size of array"<<endl;
    cin>>n;

    cout<<"Enter the elements in the array:"<<endl;
    for(i=0;i<n;i++ ){
        cin>>a[i];
    }

     //int *p = a;
     
cout<<left<<"Array Index"<<setw(20)<<"Elements"<<setw(20)<<"Address";

for(i=0;i<n;i++){
    cout<<left<<i<<setw(i+10)<<*(p+i)<<setw(10+i)<<(p+i)<<endl;

}



return 0;
}
