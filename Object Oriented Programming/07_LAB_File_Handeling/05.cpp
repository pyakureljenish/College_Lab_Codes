/*WAP to illustrate formatted and unformatted i/o operations. (one program)*/

#include<iostream>
using namespace std;


    
using namespace std;
 ostream & jenish(ostream & os)
 {
        os<<"\n";
    }
    

int main() {
    // Formatted Output
    cout << "Formatted Output:" << endl;
    int num = 123;
    double pi = 3.14159;
    string name = "Alice";

    cout << "Integer: " << num << endl;
    cout << "Double: " << pi << endl;
    cout << "String: " << name << endl;

    // Unformatted Output with the user defined manipulators
     cout<<"Using Jenish"<<endl;
     cout<<num<<jenish<<name;
   

    return 0;
}