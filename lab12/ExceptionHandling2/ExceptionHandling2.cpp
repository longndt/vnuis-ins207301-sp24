#include <iostream>
using namespace std;

enum Error {
    DivisionByZero,
    NegativeNumber
};

void checkNumber(int number) {
    if (number < 0) {
        throw NegativeNumber;
    }
}

int main() {
    try {
        checkNumber(-5);
    }
    catch (Error error) {
        switch (error) {
        case NegativeNumber:
            cerr << "Error: Negative number provided." << endl;
            break;
        default:
            // Handle other errors
            break;
        }
    }
    return 0;
}
