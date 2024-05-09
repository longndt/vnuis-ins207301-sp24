#include <iostream>
#include <string>
using namespace std;

void validateInput(const string& input) {
    if (input.empty()) {
        throw string("Input cannot be empty.");
    }
}

int main() {
    try {
        string userInput;
        cin >> userInput;
        validateInput(userInput);
    }
    catch (string error) {
        cerr << "Error: " << error << endl;
    }
    return 0;
}
