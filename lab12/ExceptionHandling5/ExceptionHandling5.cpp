#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void processInput(const string& input) {
    int value;
    stringstream ss(input);
    if (!(ss >> value)) {
        throw string("Invalid input: Expected an integer.");
    }
    cout << "You entered the number " << value << endl;
}

int main() {
    try {
        string userInput;
        cin >> userInput;
        processInput(userInput);
    }
    catch (string& errMsg) {
        cerr << "Error: " << errMsg << endl;
    }
    return 0;
}
