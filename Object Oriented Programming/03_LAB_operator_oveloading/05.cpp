/*Define a class Result with data member’s theory and lab. Create two result objects, add 
them and return third Result object using this pointer.*/

#include <iostream>
using namespace std;

// Define the Result class
class Result {
    int theory;
    int lab;

public:
    // Member function to set the theory score
    void setTheory(int t) {
        theory = t;
    }

    // Member function to set the lab score
    void setLab(int l) {
        lab = l;
    }

    // Member function to add two Result objects
    Result add(const Result& other) {
        Result result;
        result.theory = this->theory + other.theory;
        result.lab = this->lab + other.lab;
        return result;
    }

    // Member function to display the theory and lab scores
    void display() {
        cout << "Theory: " << theory << ", Lab: " << lab << endl;
    }
};

int main() {
    // Create the first Result object and set its values
    Result result1;
    result1.setTheory(80);
    result1.setLab(90);

    // Create the second Result object and set its values
    Result result2;
    result2.setTheory(70);
    result2.setLab(85);

    // Add the two Result objects to create a third Result object
    Result result3 = result1.add(result2);

    // Display the values of the Result objects
    cout << "Result 1: ";
    result1.display();

    cout << "Result 2: ";
    result2.display();

    cout << "Result 3 (Result of adding Result 1 and Result 2): ";
    result3.display();

    return 0;
}
