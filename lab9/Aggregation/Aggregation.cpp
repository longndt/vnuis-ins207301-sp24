#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    Address(string street, string city, string state, string zip)
        : street(street), city(city), state(state), zip(zip) {}

private:
    string street;
    string city;
    string state;
    string zip;
};

class Person {
public:
    Person(string name) : name(name) {}

    void setAddress(Address address) {
        this->address = address;
    }

private:
    string name;
    Address address;
};

int main() {
    Address address("123 Main St.", "Anytown", "CA", "12345");
    Person person("John Doe");
    person.setAddress(address);

    return 0;
}


