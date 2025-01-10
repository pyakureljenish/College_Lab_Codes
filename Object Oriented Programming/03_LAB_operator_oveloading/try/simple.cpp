/*#include<iostream>
using namespace std;
class jenish{
    int j;
    public:
    jenish(){
        j=20;
    }
    void show(){
        cout<<"j="<<j<<endl;
    }

};
int main(){
    jenish j1,j2,j3;
    j1.show();
    j2.show();
    j3=j1+j2;
    j3.show();


    return 0;
}*/

//The above process is the invalid process so the concept of the operator overloading is taken here into the consideration

#include<iostream>
using namespace std;
class jenish{
    int j;
    public:
    jenish(){
        j=20;
    }

    void operator ++(){
        j=j+1;//++j;
    }

    void operator ++(int){
        j=j+1;//++j;
    }

    void show(){
        cout<<"j="<<j<<endl;
    }

};
int main(){
    jenish j1;

    cout<<"The reuslt of the first increment"<<endl;
    j1++;
    j1.show();

    cout<<"The reuslt of the second increment"<<endl;
    j1++;
    j1.show();

    

    return 0;
}
