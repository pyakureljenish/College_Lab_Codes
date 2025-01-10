/*#include<iostream>
using namespace std;
int no=20;
int & number=no;
int & testRef(int &number){
    return number;
}


int main(){
    //testRef()=20;
    int &reference=testRef(number);
    cout<<&reference<<endl;
    cout<<no<<endl;
    cout<<number<<endl;

    return 0;
}*/

/*standard approach to return by reference

#include<iostream>
using namespace std;
int x=10; //global declaration so that it might get useful to the int main as well as the reference function
int & rfunction(int &n){
    return n;
}
int main(){
    int &n=x;

    cout<<n<<endl;
    cout<<x<<endl;


    return 0;

}*/


//More Standard Approach to return by reference 

#include<iostream>
using namespace std;
int x=10;
int &y=x;

int & rfunction(int &y){
    return y;
}

int main(){
   int &ref=rfunction(x);

   cout<<"&ref="<<&ref<<endl;
   cout<<"ref="<<ref<<endl;
   cout<<rfunction(y);
    return 0;
}