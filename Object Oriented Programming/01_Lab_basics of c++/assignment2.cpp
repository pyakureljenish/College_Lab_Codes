// c++ program for sum of two arrays

#include <iostream>
using namespace std;

int main() {
    int i,j,a[3],b[3],sum[3];
    int *p;
    p=&sum[3];
    
    cout<<"Enter elements in array 1"<<endl;
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    
    cout<<"Enter elements in array 2"<<endl;
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    
       cout<<"The sum is:"<<endl;
    
    for(i=0;i<3;i++){
        sum[i]=a[i]+b[i];
     
        cout<<*(p+i)<<endl;
    }
    
   
    
    return 0;
}
