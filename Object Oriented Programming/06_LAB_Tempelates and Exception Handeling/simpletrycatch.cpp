/*This is the progrma to demostrate the simple try,catch and throw if the value of x is less than 100
#include<iostream>
using namespace std;
int main(){
    int x=101;

    cout<<"Before try block"<<endl;

    try{
        cout<<"Inside of the try block"<<endl;

        if(x<100){
            throw x;
        }
         else{
cout<<"After throwing the x"<<endl;
         }
        
    }

    catch(int x){
        cout<<"Exception caught in catch block"<<endl;
    }

    return 0;
}*/

/* A program to throw an exception when the divsor is zero

#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"x:"<<endl;
    cin>>x;

    cout<<"y"<<endl;
    cin>>y;

    try{
          
          if (y==0){
            throw y;
          }
          else{
            cout<<"yes there is no error"<<endl;
          }
    }

    catch(int y){
        cout<<"hey yo! exception is handled. COOL"<<endl;
    }


    return 0;
}*/

/*This is the program to demostrate the multiple catch statement or multiple exceptions


#include<iostream>
using namespace std;
int main(){
   

    try{

         int y;
    

    cout<<"y"<<endl;
    cin>>y;
          
          if (y==0){
            throw y;
          }

         else if(y==100){
            throw "This is an error message";
          }

          else if(y==200){
            throw 404;
          }
            

         else if(y==300){
            throw 'A';
          }

           

          else{
            cout<<"yes there is no error"<<endl;
          }
    }

    catch(int y){
        cout<<"hey yo! exception is handled. COOL"<<endl;
        cout<<"Error Type"<<y<<endl;
    }



    catch(const char *c){
        cout<<"Character type exception"<<endl;
        cout<<"Error code"<<c<<endl;
    }

    catch(...){
      cout<<"Unknown Type of Exception"<<endl;
    }


    return 0;

}*/

/*catch all block program demostration

#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;

    cout<<"enter the value of b"<<endl;
    cin>>b;

    try{
        if(b==0){
            throw b;
        }

        else if(b<0){
             throw "b cannot be zero";
        }

        else{
            cout<<"Result="<<(a/b);
        }

        

    }


    catch(int b){
cout<<"b cannot be zeroooo"<<endl;
    }

    catch(const char *m){
        cout<<m<<endl;
    }

    catch(...){
cout<<"unknown exception in the program"<<endl;
    }
    return 0;

}*/


/*program to interpret the nested try of the block

#include<iostream>
using namespace std;
int main(){
    try{
        try{
            throw 404;
        }

        catch(int e){
         cout<<"An exception number is:"<<e<<endl;
        throw 'e';
    }
    }
    
catch(char c){
        cout<<"An exception occured:"<<c<<endl;
    }

    return 0;
    }*/



//Rethrowing an exception in c++

#include<iostream>
using namespace std;
int main(){
    try{
        int a,b;
        cout<<"Enter the value of a and b"<<endl;
        cin>>a>>b;

        try{
            if(b==0){
                throw b;
            }
            else{
                cout<<"a/b="<<a/b<<endl;
            }
        }

        catch(...){
            throw;
        }

    }
    catch(int){
        cout<<"The divisor cannot be zero"<<endl;
    }
    return 0;

}
