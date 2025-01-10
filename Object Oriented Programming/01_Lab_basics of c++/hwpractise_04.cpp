/*WAP to define two classes 
a. Income data member my_income
b. Expense with data member my_expense
c. Define a member function findSaving() as friend function to find total saving.
d. Display my_income, my_expense and my_saving.*/

#include<iostream>
using namespace std;
class Expense;

class Income{
   int my_income;
   public:
   void getdata(){
    my_income=15000;
    cout<<"My income is="<< my_income<<endl;
   }
   friend void findsaving(Income,Expense);
};

class Expense{
   int my_expense;

   public:
   void getdata(){
    my_expense=10000;
     cout<<"My expense is="<< my_expense<<endl;
   }
   friend void findsaving(Income,Expense);
};

void findsaving(Income i,Expense e){
   int mySaving=(i.my_income)-(e.my_expense);
   cout<<"My saving is:"<<mySaving<<endl;
}


int main(){
    Income i;
    Expense e;
    
    i.getdata();
    e.getdata();
    findsaving(i, e);

    return 0;
}