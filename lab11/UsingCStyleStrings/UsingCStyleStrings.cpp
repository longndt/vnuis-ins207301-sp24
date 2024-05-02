// C++ Program to demonstrate C-style string declaration
#include <iostream>
using namespace std;

int main()
{

	char s1[] = { 'g', 'f', 'g', '\0' };
	char s2[4] = { 'g', 'f', 'g', '\0' };
	char s3[4] = "gfg";
	char s4[] = "gfg";

	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	cout << "s3 = " << s3 << endl;
	cout << "s4 = " << s4 << endl;

	return 0;
}
