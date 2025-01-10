#include<iostream>
using namespace std;
template <class T>
class jenish{
    T age;

    public:
    jenish(T a):age(a)
    {
        cout<<"Implementation of  the class template"<<endl;
    }

    T getAge(){
        return age;
    }

};
int main(){
    jenish<int>p(22);
    int pp=p.getAge();
    cout<<"Your current age is:"<<pp<<endl;


    return 0;
}