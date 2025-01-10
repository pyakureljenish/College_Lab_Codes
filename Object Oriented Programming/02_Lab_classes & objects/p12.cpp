//program to implement overloading of ++ and -- operator using a friend function as a operator function

#include <iostream>
using namespace std;
class Time{
    int hr;
    int min;
    
    public:
    Time(int h,int m){
        hr=h;
        min=m;
        
}

void showtime(){
    cout<<"Time in hour="<<hr<<endl;
    cout<<"Time in minute="<<min<<endl;
}

friend void operator ++(Time&);
friend void operator --(Time&);
};

void operator++(Time &t){
    ++t.hr;
    ++t.min;
}

void operator--(Time &t){
    --t.hr;
    --t.min;
}


int main() {
    
    Time t(2,35);
    cout<<"Result before Operator overloading:"<<endl;
    t.showtime();
    operator ++(t);
       cout<<"Result after Operator ++ overloading:"<<endl;
        t.showtime();
       operator --(t);
         cout<<"Result after Operator -- overloading:"<<endl;
         
          t.showtime();
        
    
    
    
    
    return 0;
}