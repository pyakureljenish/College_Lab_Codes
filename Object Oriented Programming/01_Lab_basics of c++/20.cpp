#include<iostream>
using namespace std;
int main(){
    int a[3]={2,4,6},i,j,temp;
    int c[3],d[3];
    int b[3]={4,6,2};

    for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){
            temp=a[i];
            a[i]=c[j];
            c[j]=a[i];

        }
    }

for(i=0;i<3;i++){
        for(j=i+1;j<3;j++){

    cout<<c[i];
        }
        return 0;
}
}