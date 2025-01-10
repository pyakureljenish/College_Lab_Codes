/*#include<iostream>
using namespace std;
class jenish{
   static int jp;
   public:
   static int count(){
    jp++;
    return jp;
   }

   void show(){
    cout<<jp<<endl;
   }
};
int jenish::jp=0;
int main(){
    jenish j1,j2;
    j1.count();
    j1.show();

    j2.count();
    j2.show();
        return 0;
}*/



/*Write a program according to the specification given below:

– Create a class Account with data members acc no, balance, and min_balance(static)
-Include methods for reading and displaying values of objects
– Define static member function to display min_balance
-Create array of objects to store data of 5 accounts and read and display values of each object*/

#include<iostream>
using namespace std;
class Account{
    int acc_no,balance;
    static int min_balance;

    public:

    void details(){
        cout<<"Account Number"<<endl;
        cin>>acc_no;

        cout<<"Balance:"<<endl;
        cin>>balance;

        
    }

    static int minimumbalance(){
        cout<<"Minimum Balance"<<min_balance<<endl;
        return min_balance;

    }

      void show(){
         cout<<"Account Number"<<acc_no<<endl;
      

      
       

        cout<<"Balance:"<<balance<<endl;
      }


};

int Account::min_balance=5000;

int main(){
    int i=0;
    Account a[i];
    for(int i=0;i<2;i++){
        a[i].details();

        Account::minimumbalance();
        a[i].show();
        
       
}


    return 0;
}