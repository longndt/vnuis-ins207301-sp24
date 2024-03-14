#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Base class content.";
    }
};

class B : public A {};

class C : public B {};

class D : public C {};

int main() {
    D obj;
    obj.display();
    return 0;
}