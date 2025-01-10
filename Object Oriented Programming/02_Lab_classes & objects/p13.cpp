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

Time operator++(){
    Time t1;
    t1.hr=++hr;
    t1.min=++min;
    return t1;
}

Time operator--(){
    Time t2;
    t2.hr=++hr;
    t2.min=--min;
    return t2;
}

void showtime(){
    cout<<"Time in hour="<<hr<<endl;
    cout<<"Time in minute="<<min<<endl;
}

};

int main() {
    
   Time t1(2,55),t2;
   Time t3(3,45),t4;
   t1.showtime();
      t3.showtime();
  
   t2=++t1;
   t4=--t3;
   
   cout<<"T2 time="   <<endl;
  t2.showtime();
  
  cout<<"T4 time="   <<endl;
  
  t4.showtime();
 
    return 0;
}