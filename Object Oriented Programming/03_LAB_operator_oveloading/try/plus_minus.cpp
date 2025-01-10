/*This is the program to demonstrate the unary operator 

#include<iostream>
using namespace std;
class Rectangle{
    int length,width;
    public:
    Rectangle(){}
        Rectangle(int len,int wid){
           length=len;
           width=wid;
        }

        void showArea(){
            int area=length*width;
            cout<<"area of rectangle="<<area<<endl;

        }

        void operator ++(int){
            length++;
            width++;

        }

        void operator --(int){
            length--;
            width--;
}
};

int main(){
    Rectangle r(10,2),r1,r2;
    r.showArea();   

    r++;
    r.showArea();

    r--;
    r.showArea();
return 0;
}*/

/*Program to implement the friend function as a operator function

#include<iostream>
using namespace std;

class Rectangle{
    int length;
    int width;

    public:

    Rectangle(int l,int w){
        length=l;
        width=w;
    }

 void showArea(){
    int area=length*width;
    cout<<"area of rectangle="<<area<<endl;
 }

 friend void operator ++(Rectangle&);
 friend void operator --(Rectangle&);

};


 void operator ++(Rectangle&r){
    ++r.length;
    ++r.width;

 }
 void operator --(Rectangle&r){
     --r.length;
     --r.width;
 }

int main(){
    Rectangle R(10,2);
    R.showArea();

    R++;
    R.showArea();

    --R;
    R.showArea();


    
    return 0;
}*/

//program to implement the + and - 

#include<iostream>
using namespace std;
class money{
    int m;
    float n;
    public:
    money(){}
    money(int mm, float nn){
        m=mm;
        n=nn;
    }

      money operator +(money &p){
        cout<<p.m+p.n;
    }

};
int main(){
 money m(1,1.5),m1;
 m1=+m;

return 0;
}