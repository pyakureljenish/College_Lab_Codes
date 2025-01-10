#include<iostream>
using namespace std;
class Account{
    private:
    int accNo;
    double balance;

    public:
    void getAcc(){
        cout<<"Enter Ac.no:"<<endl;
        cin>>accNo;

        cout<<"Enter the balance"<<endl;
        cin>>balance;
    }

    void showAcc(){
       cout<<"Your Account No is:"<<accNo<<endl;
    }

    void checkBalance(){
    cout<<"Your balance is"<<balance<<endl;
    }

    void Deposit(){
        int dep;
        cout<<"Enter the amount to deposit"<<endl;
        cin>>dep;
        balance=balance+dep;
        cout<<"Amount you deposited"<<dep<<endl;

    }

    void withdraw(){
        int with;

        cout<<"Enter the amount to withdraw:"<<endl;
        cin>>with;

        balance=balance-with;
        cout<<"Amount you withdrawn:"<<with<<endl;


    }

};

int main(){

    Account a;

    a.getAcc();
    a.showAcc();
   a.checkBalance();

   a.Deposit();
   a.checkBalance();

   a.withdraw();
   a.checkBalance();
   return 0;
   
    

 

}