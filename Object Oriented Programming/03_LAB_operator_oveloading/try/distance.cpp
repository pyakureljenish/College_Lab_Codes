/*write a program to add the object to distance class with data members feet and inch
by using member function and friend function*/

#include <iostream>

using namespace std;

class Distance{
    private:
        int feet;
        int inch;

    public:
        void set_distance()
        {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inch: ";
            cin >> inch;
        }

        void display(){
            cout << "\nFeet => " << feet << " Inch => " << inch << endl;
        }

        friend Distance operator + (Distance d1, Distance d2);
};

Distance operator + (Distance d1, Distance d2)
{
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    return d3;
}

int main()
{
    Distance d1, d2, d3;
    d1.set_distance();
    d2.set_distance();
    d3 = d1 + d2;
    d3.display();
    return 0;
}