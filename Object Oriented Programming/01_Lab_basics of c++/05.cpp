//Thi is the program to sort

#include<iostream>
using namespace std;
void sortascending(int a[10]){
    int i,j,temp;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"The sorted array elements in the ascending order is:\n";
    for(i=0;i<10;i++){
    cout<<a[i]<<endl;
    }
}


void sortdescending(int a[10]){
    int i,j,temp;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"The sorted array elements in the descending order is:\n";
    for(j=0;j<10;j++){
    cout<<a[j]<<endl;
    }
}

int main(){
    int a[10],i;
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }

sortascending(a);

sortdescending(a);


    return 0;
}
