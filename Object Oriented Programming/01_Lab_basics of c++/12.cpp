//This is the program to implement the dynamic memory allocation

#include<iostream>
using namespace std;
int main(){
    
    int n,i;
cout<<"Enter the size of n";
cin>>n;

int *gpa;

    gpa=new int[n];
    cout<<"Enter the gpa of the students:\n";

    for(i=0;i<n;i++){
        cout<<"The grades of the students" <<i+1<<": ";
        cin>>*(gpa+i);
    }
    cout<<"The grades of the students are:\n";
    for(i=0;i<n;i++){
        cout<<"Marks of the students are"<<i+1<<":"<<*(gpa+i)<<'\n';
    }
    delete[]gpa;



return 0;
}
