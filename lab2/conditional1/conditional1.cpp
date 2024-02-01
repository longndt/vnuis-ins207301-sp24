//"switch ... case" structure
#include <iostream>
using namespace std;

int main() {
	//set the fan's speed based on input
	//0 => Fan stops
	//1 => Fan's speed is set to 1
	//2 => Fan's speed is set to 2
	//3 => Fan's speed is set to 3

	int speed;
	cout << "Input fan's speed (0-3): ";
	cin >> speed;

	switch (speed)
	{
		case 0: 
			cout << "Fan is stopped \n";
			break;

		case 1:
			cout << "Fan's speed is 1 \n";
			break;

		case 2:
			cout << "Fan's speed is 2 \n";
			break;

		case 3:
			cout << "Fan's speed is 3 \n";
			break;

		default:
			cout << "Invalid fan's speed ! \n";
			break;
	}

	return 0;
}