/*Define a class Salary with data members basic and bonus. Create two salary objects, add 
them and return third salary object you.*/



#include <iostream>
using namespace std;

class Salary {
private:
    float basic;
    float bonus;

public:
    // Constructor to initialize basic and bonus
    Salary(float b, float bn) {
        basic = b;
        bonus = bn;
    }

    // Function to add two Salary objects and return a new Salary object
    Salary addSalaries(const Salary& other) const {
        float totalBasic = basic + other.basic;
        float totalBonus = bonus + other.bonus;
        return Salary(totalBasic, totalBonus);
    }

    // Function to display the Salary details
    void display() {
        cout << "Basic Salary: " << basic << endl;
        cout << "Bonus: " << bonus << endl;
    }
};

int main() {
    // Create two Salary objects
    Salary salary1(5000.0, 1000.0);
    Salary salary2(6000.0, 1200.0);

    // Add the two Salary objects and store the result in a third Salary object
    Salary totalSalary = salary1.addSalaries(salary2);

    // Display the details of the third Salary object (the sum)
    cout << "Total Salary (Sum of salary1 and salary2):" << endl;
    totalSalary.display();

    return 0;
}
