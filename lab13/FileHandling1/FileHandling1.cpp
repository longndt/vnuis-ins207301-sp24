#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char data[100];

    // opening a file in write mode.
    ofstream myfile;
    myfile.open("E:\\message.txt");

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin.getline(data, 100);

    myfile << data << endl;

    cout << "Enter your age: "; cin >> data;
    cin.ignore();

    myfile << data << endl;

    // close the opened file.
    myfile.close();

    // opening a file in read mode.
    ifstream infile;
    infile.open("E:\\message.txt");

    cout << "Reading from a file" << endl; infile >> data;

    cout << data << endl; infile >> data;
    cout << data << endl;

    infile.close();

    return 0;
}