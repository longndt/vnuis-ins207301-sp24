#include <iostream>
using namespace std;

int main() {
	//prompt user to input their grade (0-10)
	//display the grading scale based on grade
	/*
		Excellent  : 9-10 (IF)
		Very Good  : 8-9  (ELSE IF)
		Good       : 7-8  (ELSE IF)
		Fair       : 6-7  (ELSE IF)
		Pass       : 5-6  (ELSE IF)
		Fail       : 0-5  (ELSE IF)
		Invalid grade : <0 or >10 (ELSE) => Exceptional case
	*/

	//improve the program using "do...while" for input validation
   //if user inputs incorrectly (outside valid range), they need to input again
	//until he/she input correctly => repeat

	double grade;

	//limitation: program only check for 1 time using "if"
	/*if (grade < 0 || grade > 10) {
		cout << "Invalid grade. Enter new grade: ";
		cin >> grade;
	}*/

	//solution: using "do...while" for multiple times validation 
	do {
		cout << "Enter your grade (0-10): ";
		cin >> grade;
	} while (grade < 0 || grade > 10);

	// if (9 <= grade <= 10)  //short-hand
	if (grade >= 9.0 && grade <= 10)
		cout << "Excellent";
	else if (grade >= 8.0 && grade < 9.0)
		cout << "Very good";
	else if (grade >= 7.0 && grade < 8.0)
		cout << "Good";
	else if (grade >= 6.0 && grade < 7.0)
		cout << "Fair";
	else if (grade >= 5.0 && grade < 6.0)
		cout << "Pass";
	else if (grade >= 0 && grade < 5.0)
		cout << "Fail";
	else   // grade < 0 || grade > 10
		cout << "Invalid grade";


	return 0;
}