//program to implement overloading of ++ and -- operator using not a friend function

#include <iostream>
using namespace std;
class Time{
    int hr;
    int min;
    
    public:
    Time(){};
    Time(int h,int m){
        hr=h;
        min=m;
}

void operator++(){
    hr++;
    min++;
}

void operator--(){
    hr--;
    min--;
}

void showtime(){
    cout<<"Time in hour="<<hr<<endl;
    cout<<"Time in minute="<<min<<endl;
}



};

int main() {
    
    Time t(2,35);
    cout<<"Result before Operator overloading:"<<endl;
    t.showtime();
    t++;
       cout<<"Result after Operator ++ overloading:"<<endl;
        t.showtime();
        t--;
         cout<<"Result after Operator -- overloading:"<<endl;
         
          t.showtime();
        
    
    
    
    
    return 0;
}
