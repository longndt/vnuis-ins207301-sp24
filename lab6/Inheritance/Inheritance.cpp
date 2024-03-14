// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal {

public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {

public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

// derived class
class Cat : public Animal {

public:
    void jump() {
        cout << "I can jump" << endl;
    }
};

int main() {
    //Create object of the Dog class
    Dog dog1;

    cout << "I am a dog" << endl;
    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();

    // Create object of the Cat class
    Cat cat1;
    cout << "I am a cat" << endl;
    cat1.eat();
    cat1.sleep();
    cat1.jump();

    return 0;
}