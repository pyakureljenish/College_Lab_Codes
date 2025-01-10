/*WAP to open myFile.txt, read and display data on screen.*/

#include<iostream>
#include<fstream>

using namespace std;
int main(){
    fstream fileobj;
        //fileobj.open("myFilee.txt",ios::out);

    fileobj.open("myFile.txt",ios::in);

    if(!fileobj){
        cout<<"File is not created"<<endl;

    }

   

    else{
        char ch;
        while(!fileobj.eof()){
            fileobj>>ch;
            cout<<ch;
        }
    }
    fileobj.close();

    return 0;
}

/*#include<iostream>
#include<fstream>

using namespace std;

int main() {
    ifstream fileobj; // Use ifstream for reading
    fileobj.open("myFile.txt", ios::in);

    if (!fileobj) {
        cout << "File is not created" << endl;
    }
    else {
        char ch;
        while (fileobj.get(ch)) {
            cout << ch;
        }
    }
    fileobj.close();

    return 0;
}
*/