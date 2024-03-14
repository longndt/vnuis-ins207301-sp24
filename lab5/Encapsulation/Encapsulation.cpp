// Program to calculate the area of a rectangle
#include <iostream>
using namespace std;

class Rectangle {
public:
    // Variables required for area calculation
    int length;
    int breadth;

    // Constructor to initialize variables
    Rectangle(int len, int brth) : length(len), breadth(brth) {}

    // Function to calculate area
    int getArea() {
        return length * breadth;
    }
};

int main() {
    // Create object of Rectangle class
    Rectangle rect(8, 6);

    // Call getArea() function
    cout << "Area = " << rect.getArea();

    return 0;
}