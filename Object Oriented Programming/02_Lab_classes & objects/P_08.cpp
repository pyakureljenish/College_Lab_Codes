#include<iostream>
using namespace std;
class calculation{
    int number1,number2;
    public:

    /*void swap(int a,int b){
        cout<<"Intial no:"<<a,b;
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"Final no:"<<a,b;
        }
    void showdata(int a ,int b){
        //cout<<"Number"<<number1;
        cout<<"swap="<<a,b;
    }*/

    void getdata(){
        number1=3;
        number2=4;
    }

     int factorial(int n){
        if(n==0){
            return 1;
        }
        else{
            return n* factorial(n- 1 );
     }
     }
    
    void showresult(){
        cout<<"Factorial result 1="<<factorial(number1)<<endl;

        cout<<"Factorial result 2="<<factorial(number2)<<endl;
}

};

int main(){
    calculation f;
    f.getdata();
    f.showresult();

    return 0;
}
