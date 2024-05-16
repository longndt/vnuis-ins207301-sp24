#include <iostream>
#include <string>
#include <fstream>  
using namespace std;

void writeFile() {
    ofstream outFile("D:\\example.txt"); // Create an ofstream object and open "example.txt" for writing
    if (outFile.is_open()) {
        outFile << "Hello, world!" << endl; // Write a string to the file
        outFile << "This is an example of file handling in C++." << endl; // Write another string
        outFile.close(); // Close the file after writing
    }
    else {
        cout << "Unable to open file for writing." << endl;
    }
}

void readFile() {
    ifstream inFile("D:\\example.txt"); // Create an ifstream object and open "example.txt" for reading
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) { // Read data from the file line by line
            cout << line << endl; // Print each line
        }
        inFile.close(); // Close the file after reading
    } else {
        cout << "Unable to open file for reading." << endl;
    }
}

int main() {
    writeFile(); // Call function to write to a file
    readFile();  // Call function to read from the file
    return 0;
}
