// C++ program to demonstrate the use of default constructor

#include <iostream>
using namespace std;

// declare a class
class  Wall {
private:
	double length;

public:

	// default constructor to initialize variable
	Wall() {
		length = 100;  //default value
	}

	Wall(double l) {
		length = l;
	}

	void hello() {
		cout << "Wall length: " <<length;
	}
};

int main() {
	Wall wall1;
	Wall wall2(200);
	wall1.hello();
	cout << endl;
	wall2.hello();
	return 0;
}