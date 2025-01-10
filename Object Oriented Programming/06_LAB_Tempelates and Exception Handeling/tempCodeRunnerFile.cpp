#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a and b"<<endl;
    cin>>a>>b;

    try{
        if(b==0){
            throw b;
        }

        else if(b<0){
             throw "b cannot be zero";
        }

        else{
            cout<<"Result="<<(a/b);
        }

        

    }


    catch(int b){
cout<<"b cannot be zeroooo"<<endl;
    }

    catch(const char *m){
        cout<<m<<endl;
    }

    catch(...){
cout<<"unknown exception in the program"<<endl;
    }
    return 0;

}