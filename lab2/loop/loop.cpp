#include <iostream>
using namespace std;

int main() {
	//display even numbers from 1 to 1000 using for loop
	//even numbers (divisible by 2): 2, 4, 6, 8, ....
	int i;
	for (i = 1; i <= 1000; i++) {
		if (i % 2 == 0) {
		  // % : modulus => get remainder of a division
			cout << i << endl;
		}

		//Note: after some structures such as "for", "if", if we only have 1 statement inside that structure we do not need to include bracket { } otherwise if there are at least 2 statements inside we must include brackets
	}

	return 0;  //optional but recommend to do as a good habit when practice
}