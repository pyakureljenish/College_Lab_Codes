#include<iostream>
using namespace std;
namespace sem1{
    void getmyAverage(int s1,float s2,int s3, float average1){
        cout<<"The average marks in the sem1 is:"<<average1<<'\n';
    }
}

namespace sem2{
    void getmyAverage(int s11,float s22,int s33, float average2){
        cout<<"The average marks in the sem1 is:"<<average2<<'\n';
    }
}

int main(){

    int s1,s11,s3,s33;
    float s2,s22,average1,average2,final_average;

    cout<<"Enter marks of subject 1 of semester 1:"<<'\n';
    cin>>s1;

    cout<<"Enter marks of subject 2 of semester 1:"<<'\n';
    cin>>s2;

    cout<<"Enter marks of subject 3 of semester 1:"<<'\n';
    cin>>s3;

    cout<<"Enter marks of subject 1 of semester 2:"<<'\n';
    cin>>s11;

    cout<<"Enter marks of subject 2 of semester 2:"<<'\n';
    cin>>s22;

    cout<<"Enter marks of subject 3 of semester 2:"<<'\n';
    cin>>s33;

    average1=(s1+s2+s3)/3;
      average2=(s11+s22+s33)/3;
      final_average=(average1+average2)/2;

      sem1:: getmyAverage(s1,s2,s3,average1);

      sem2 ::getmyAverage(s11,s22,s33, average2);

      cout<<"The final average is:"<<final_average;

    return 0;

}