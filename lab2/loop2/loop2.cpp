#include <iostream>
using namespace std;

int main() {
	//display 1 to 1000 using "while" loop

	//set initial value for "i"
	int i = 1;

	//set condition to run the loop
	while (i <= 1000) {
		//display value of i
		cout << i << endl;
		//increase "i" for 1 value after each iteration
		i++;
	}


	//display 1 to 1000 using "do...while" loop
	int j = 1;
	do {
		cout << j << endl;
		j++;
	} while (j <= 1000);

	return 0;
}