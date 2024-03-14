// Program to illustrate the working of
// objects and class in C++ Programming

#include <iostream>
using namespace std;

// create a class
class Room {

private:
    //attributes (variables)
    double length;
    double breadth;
    double height;


public:
    //behaviours (methods)
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

    // => create objects inside OOP class
    void createObject() {
        Room room3, room4;
    }
};

int main() {

    // create object of Room class
    // => create objects outside OOP class
    Room room1, room2;

    // assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;

    // calculate and display the area and volume of the room
    // make method call (invoke) to run methods which are defined in class
    cout << "Area of Room 1 =  " << room1.calculateArea() << endl;
    cout << "Volume of Room 1 =  " << room1.calculateVolume() << endl;

    return 0;
}