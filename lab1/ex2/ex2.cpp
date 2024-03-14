#include <iostream>

/* (multiple-line comment)
declare namespace "std"
outside main method
so we can ignore "std" when we 
write the codes
*/
using namespace std;

//declare string class (to replace for chracter array)
#include <string>;

/* 
Note: If there are more than 1 project (at least 2 projects) inside 1 solution, we must select the default to run 
How: Right click on project's name => Set as startup project
*/

int main() {
	//declare variables
	//1st: declare variable and initialize value at same time
	int year = 2024;   //int : integer
	//2nd: declare variable first
	int age;
	//2nd: set initial value later
	age = 40;
	
	//display variable's value
	cout << "The current year is " << year << "\n";
	cout << "You are " << age << " years old now\n";

	//floating point number
	double gpa = 7.8;   //recommended to use
	float grade = 5.5;

	//logical value : true, false
	bool pass = true;  //boolean

	//character (1 letter only) 
	char gender = 'f';  //must use single quote ''

	//string
	//Remember to declare string library first
	//#include <string>;
	string is = "International School";
	string vnu = "Vietnam National University";
	cout << is << " is a member of " << vnu;
}