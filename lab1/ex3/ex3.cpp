/*
In this example, we learn how to get
input from user (keyboard) using "cin"
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	//declare "name", "birthYear", "age" variables  
	string name;
	int birthYear, age;
	//prompt user to input their birthyear
	cout << "Enter your birth year: ";
	//get birthyear from user
	cin >> birthYear;
	//prompt user to input their name 
	cout << "Enter your name: ";
	//get name from user
	cin >> name;
	//calculate the age based on birthYear
	age = 2024 - birthYear;
	//display result to console
	cout << "Welcome " << name << " to VNU IS !\n";
	cout << "You are " << age << " years old now !\n";
}