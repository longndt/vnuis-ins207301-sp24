#include <iostream>
#include <string>
using namespace std;

/*
Remember to set startup project to select 
which project you want to run 
in case your solution has more than 1 project
*/
int main() {
	//A. Calculate total of 2 integers
	/*int x, y, z;
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	z = x + y;
	cout << "Total: " << z;*/

	//B. Prompt user to input name & birth year
	//and display to console
	int birthYear, age;
	string name;  //must import "string" library to use

	cout << "Enter your name: ";
	//cin >> name; //1st way: the program will skip letters after spaces
	getline(cin, name); //2nd way: the program will take every letters including spaces

	cout << "Enter your birth year: ";
	cin >> birthYear;

	age = 2024 - birthYear;

	cout << "Hello " << name << endl;
	cout << "You were born in " << birthYear << endl;
	cout << "You are " << age << " years old now" << endl;
}