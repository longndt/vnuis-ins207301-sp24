// C++ program to call the overridden function
// from a member function of the derived class

#include <iostream>
using namespace std;

class Base {
public:
    void print() {  //overriden method
        cout << "Base Function" << endl;
    }

    void demo() {
        cout << "Demo function in base class" << endl;
    }
};

class Derived : public Base {
public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    // call overriden method in base class
    derived1.Base::print();
    return 0;
}