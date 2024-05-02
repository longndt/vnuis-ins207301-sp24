// C++ Program to demonstrate string iterator functions
#include <iostream>
using namespace std;

int main()
{
	// declaring an iterator
	string::iterator itr;

	// declaring a reverse iterator
	string::reverse_iterator rit;

	string s = "GeeksforGeeks";

	itr = s.begin();

	cout << "Pointing to the start of the string: " << *itr << endl;

	itr = s.end() - 1;

	cout << "Pointing to the end of the string: " << *itr << endl;

	rit = s.rbegin();
	cout << "Pointing to the last character of the string: " << *rit << endl;

	rit = s.rend() - 1;
	cout << "Pointing to the first character of the string: " << *rit << endl;

	return 0;
}
