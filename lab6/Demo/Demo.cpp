 #include <iostream>
#include <string>
using namespace std;

class Person {
public:
    void sayHi() {
        cout << "I am person";
    }
};

class Student : public Person {
public:
    void sayHi() {
        cout << "I am student";
    }
};

int main() {
    Student s;
    s.sayHi();
    return 0;
}

 