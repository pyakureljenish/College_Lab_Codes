/*#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
       
 cout<<"*"<<endl;
}





    /*for(int i=1;i<4;i++){
 cout<<"*"<<endl;
    }*/

    /*for(int i=2;i<4;i++){
 cout<<"*"<<endl;
    }

    for(int i=3;i<4;i++){
 cout<<"*"<<endl;
    }*/
      
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print spaces before the stars
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Inner loop to print stars in each row
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}





   
