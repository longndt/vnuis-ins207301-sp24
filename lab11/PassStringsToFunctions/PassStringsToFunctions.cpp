// C++ Program to print string using function
#include <iostream>
using namespace std;

void print_string(string s)
{
	cout << "Passed String is: " << s << endl;
	return;
}

int main()
{

	string s = "GeeksforGeeks";
	print_string(s);

	return 0;
}
