
/*Program to illustrate the use of the seekg() and tellg()

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int pos;
    fstream file;

    file.open("seek_tell.txt",ios::out);

        //file.open("seek_tell.txt",ios::in);


if(!file){
    cout<<"Invalid file"<<endl;
}

else{
    cout<<"New file is ready"<<endl;
    file<<"Jenish";
    file.close(); 

}


file.open("seek_tell.txt", ios::in);

    if (!file) {
        cout << "Failed to reopen the file for reading" << endl;
        return 1;
    }

    pos=file.tellg();
    cout<<"position:"<<pos<<endl;

    file.seekg(0,ios::end);
    pos=file.tellg();
    cout<<"Postion"<<pos<<endl;

    file.seekg(-3,ios::end);
    pos=file.tellg();
    cout<<"Postion"<<pos<<endl;

    file.seekg(3,ios::cur);
    pos=file.tellg();
    cout<<"Postion"<<pos<<endl;

    file.seekg(0,ios::beg);
    pos=file.tellg();
    cout<<"Postion"<<pos<<endl;

    file.close();


    return 0;
}*/

//Program to demonstrate the use of the seekp and tellp

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    int pos;
    fstream file;

    file.open("seek_tell_P.txt",ios::out);

        //file.open("seek_tell.txt",ios::in);


if(!file){
    cout<<"Invalid file"<<endl;
}

else{
    cout<<"New file is ready"<<endl;
    file<<"Jenish";
    file.close(); 

}


file.open("seek_tell.txt", ios::in);

    if (!file) {
        cout << "Failed to reopen the file for reading" << endl;
        return 1;
    }

    pos=file.tellp();
    cout<<"position:"<<pos<<endl;

    file.seekp(0,ios::end);
    pos=file.tellp();
    cout<<"Postion"<<pos<<endl;

    file.seekp(-3,ios::end);
    pos=file.tellp();
    cout<<"Postion"<<pos<<endl;

    file.seekp(3,ios::cur);
    pos=file.tellp();
    cout<<"Postion"<<pos<<endl;

    file.seekp(0,ios::beg);
    pos=file.tellp();
    cout<<"Postion"<<pos<<endl;

    file.close();


    return 0;
}



