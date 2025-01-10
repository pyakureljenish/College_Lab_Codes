/*WAp to create a file myFile.txt and write your basic information (eg: name, college, 
faculty etc) into it.*/


#include<iostream>
#include<fstream>
using namespace std;
int main(){
    //This is a way to create a file with the object we can do with the help of constructor as well

    /*fstream fileobj;

     fileobj.open("myFile.txt",ios::out)*/

     fstream fileobj("myFile.txt",ios::out);

     if(!fileobj){
        cout<<"File creation is failed"<<endl;

     }

     else{
        cout<<"New file created succesfully"<<endl;
        fileobj<<"Name=Jenish,college=CABbbbbbbbb,faculty=BSC.CSIT"<<endl;
     }

     fileobj.close();
    return 0;
}