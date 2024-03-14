#include <iostream>
#include <string>
using namespace std;

class Student {
	private:
		string name;
		int age;
		double gpa;
	public:
		Student(string n, int a, double g) {
			name = n;
			age = a;
			gpa = g;
		}
		//1st way : both declare and define method inside class
		string getName() {
			return name;
		}
		//2nd way (A) : declare method inside class
		int getAge();
		void setGPA(double g);

		void showStudentInfo() {
			cout << "Student Name: " << name << endl;
			cout << "Student Age: " << age << endl;
			cout << "Student GPA: " << gpa << endl;
		}
};

//2nd way (B) : define method outside class
int Student::getAge() {
	return age;
}
void Student::setGPA(double g) {
	gpa = g;
}

int main() {
	Student s1("Michael", 20, 7.5);
	cout << "Name: " << s1.getName() << endl;
	cout << "Age: " << s1.getAge() << endl;
	s1.setGPA(5.7);
	s1.showStudentInfo();
}