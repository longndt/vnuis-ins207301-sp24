#include <iostream>
using namespace std;

//declare an OOP class to represent for Cirle in real life
class Circle {
	//declare attributes (characteristics) => variables
	//Data members
	//remember to set access modifier of variables as private
	//due to "information hiding" rule (security reason)
	private:
		double radius;
		double area;

	//declare behaviours (operations) => methods
	//Member functions
	public:
		//declare constructor: used to create new object (class instance)
		//constructor: special method (no return type, similar name with class)
		//1 class may have 1 or many constructors
		Circle() { }  //empty (default) constructor
		Circle(double r) {  //parameter constructor
			radius = r;
		}
		
		//declare destructor: used to delete an object (optional, not so important)
		//~Circle() { }

		//declare getter (observer): used to retrieve/get data 
		double getRadius() {
			return radius;
		}
		double getArea() {
			const double PI_NUMBER = 3.14;
			area = PI_NUMBER * radius * radius;
			return area;
		}
		double getPerimeter() {
			const double PI_NUMBER = 3.14;
			return PI_NUMBER * 2 * radius;
		}
		
		//declare setter (mutator): used to change/update data
		void setRadius(double r) {
			radius = r;
		}

		//declare user-defined method
		void showDetail() {
			cout << "Radius: " << getRadius() << endl;
			cout << "Area: " << getArea() << endl;
			cout << "Perimeter: " << getPerimeter() << endl;
		}
};

int main() {
	//declare circle 1 with default constructor
	cout << "Creating circle 1 with default constructor ..." << endl;
	Circle cirle1();

	//declare circle 2 with parameter constructor
	cout << "Creating circle 2 with parameter constructor ..." << endl;
	Circle cirle2(3.7);
	cout << "Initial Radius of circle 2: " << cirle2.getRadius() << endl;
	cout << "Initial Area of circle 2: " << cirle2.getArea() << endl;
	cout << "Initial Perimeter of circle 2: " << cirle2.getPerimeter() << endl;
	cout << "Changing new radius for circle 2 to 7.3" << endl;
	cirle2.setRadius(7.3);
	cout << "New Radius of circle 2: " << cirle2.getRadius() << endl;
	cout << "New Area of circle 2: " << cirle2.getArea() << endl;
	cout << "New Perimeter of circle 2: " << cirle2.getPerimeter() << endl;
	cirle2.showDetail();
	return 0; //optional but recommend to include
 
}