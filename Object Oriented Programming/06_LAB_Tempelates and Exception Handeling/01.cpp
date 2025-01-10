#include<iostream>
using namespace std;
template<typename T>
T add(T num1, T num2){
    return(num1+num2);
}
int main(){
    int sum1;
    double sum2;

    sum1=add<int>(5,3);

    cout<<sum1<<endl;

    sum2=add<double>(5.3,5.6);

    cout<<sum2<<endl;
    
    return 0;
}