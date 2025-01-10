#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string college;
    int rollNo;

public:
   
    // Default Constructor
    Student() {
        name = "jenish";
        college = "cab";
        rollNo = 06;
    }

    // Parameterized Constructor
    Student(string  n, string  c, int r) {
        name = n;
        college = c;
        rollNo = r;
    }

    // Constructor with Default Argument
    Student(string  n, string c = "Default College", int r =06) {
        name = n;
        college = c;
        rollNo = r;
    }

    // Copy Constructor
    Student(Student& s) {
        name = s.name;
        college = s.college;
        rollNo = s.rollNo;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "College: " << college <<endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

int main() {
   //Default constructor

    Student s1; 
    cout << "s1 (Default Constructor)"<<endl;
    s1.display();
    cout << "\n";

    // Parameterized Constructor

    Student s2("Jenish", "College of Applied Business", 106); 
    cout << "s2 (Parameterized Constructor):\n";
    s2.display();
    cout << "\n";

    // Constructor with Default Argument

    Student s3 ("Jenish"); 
    cout << "s3 (Constructor with Default Argument)"<<endl;
    s3.display();
    cout << "\n";

    //Copy Constructor

    Student s4(s2); 
    cout << "s4 (Copy Constructor):\n";
   
    s4.display();
    

    return 0;
}
