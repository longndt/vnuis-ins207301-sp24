// C++ Program to demonstrate use of stringstream object
#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main()
{

	string s = " GeeksforGeeks to the Moon ";
	stringstream obj(s);
	// string to store words individually
	string temp;
	// >> operator will read from the stringstream object
	while (obj >> temp) {
		cout << temp << endl;
	}
	return 0;
}
