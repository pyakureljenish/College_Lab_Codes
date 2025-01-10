/* Define a class Employee with details as:
i. Private members : e_id(int), e_name(string), e_salary, e_DA, e_OT, e_NetPay (all 
floats) and function calculate() with float return type which finds 
e_salary+e_DA+e_OT and returns total
ii. Public members: a member function getEmployee() to get employee data and a
display() function to call calculate() function. WAP to display employee details.*/




#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int e_id;
    string e_name;
    float e_salary, e_DA, e_OT, e_NetPay;

    // Private member function to calculate e_salary + e_DA + e_OT
    float calculate() {
        return e_salary + e_DA + e_OT;
    }

public:
    // Public member function to get employee data
    void getEmployee(int id, string name, float salary, float DA, float OT) {
        e_id = id;
        e_name = name;
        e_salary = salary;
        e_DA = DA;
        e_OT = OT;
        e_NetPay = calculate(); // Calculate e_NetPay using the private calculate() function
    }

    // Public member function to display employee details
    void display() {
        cout << "Employee ID: " << e_id << endl;
        cout << "Employee Name: " << e_name << endl;
        cout << "Employee Salary: " << e_salary << endl;
        cout << "Employee DA: " << e_DA << endl;
        cout << "Employee OT: " << e_OT << endl;
        cout << "Total Salary (e_salary + e_DA + e_OT): " << e_NetPay << endl;
    }
};

int main() {
    Employee emp;
    emp.getEmployee(1, "John Doe", 5000.0, 1000.0, 200.0);
    emp.display();

    return 0;
}



