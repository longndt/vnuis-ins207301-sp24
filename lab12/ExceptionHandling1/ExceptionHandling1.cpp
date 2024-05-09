#include <iostream>
using namespace std;

int divide(int numerator, int denominator) {
    if (denominator == 0) {
        throw - 1; // Throw an integer error code
    }
    return numerator / denominator;
}

int main() {
    try {
        cout << divide(10, 0) << endl;
    }
    catch (int error) {
        if (error == -1) {
            cerr << "Error: Division by zero." << endl;
        }
    }
    return 0;
}
