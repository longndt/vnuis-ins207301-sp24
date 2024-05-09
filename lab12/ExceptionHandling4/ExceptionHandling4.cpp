#include <iostream>
using namespace std;

void accessArrayElement(int index) {
    int arr[5] = { 1, 2, 3, 4, 5 };
    if (index < 0 || index >= sizeof(arr) / sizeof(arr[0])) {
        throw string("Index out of bounds.");
    }
    cout << "Element: " << arr[index] << endl;
}

int main() {
    try {
        accessArrayElement(10);
    }
    catch (std::string& errMsg) {
        cerr << "Error: " << errMsg << endl;
    }
    return 0;
}
