#include<iostream>
using namespace std;
//program to demonstrate pass by value

/*void simpleintrest(float p,float r,float t){
   float SI=(p*t*r)/100;
   cout<<"SIMPLE INTREST"<<"="<<SI;
}
int main(){
    //float p,t,r;
    simpleintrest(1,2,3);
    return 0;

}*/

//program to demonstrate pass by reference

void simpleintrest(int &p,int &t,int &r){

float SI=(p*t*r)/100;
cout<<SI;
}
int main(){
    //int *ptrp,*ptrr,*ptrt;
    //int *ptrp=&p;
    //int *ptrr=&r;
    //int *ptrt=&t;

    int p=100,t=2,r=1;
    //int p,r,t;

    simpleintrest(p,t,r);
    return 0;
}

//program to demostrate pass by pointer

/*void simpleintrest(int *ptrp,int *ptrr,int *ptrt){
    float SI=(*ptrp* *ptrt* *ptrr)/100;
    cout<<SI;
}
int main(){
    int p=100,t=4,r=3;
    simpleintrest(&p,&t,&r);
    return 0;
}*/