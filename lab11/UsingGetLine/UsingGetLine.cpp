// C++ Program to demonstrate use of getline function
#include <iostream>
#include <string>
using namespace std;

int main()
{

	string s;
	cout << "Enter String" << endl;
	getline(cin, s);
	cout << "String is: " << s << endl;
	return 0;
}
