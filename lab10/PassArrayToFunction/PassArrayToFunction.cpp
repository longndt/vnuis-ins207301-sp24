#include <iostream> 
using namespace std;

// passing array as a sized array argument 
void printArraySized(int arr[3], int n)
{
	cout << "Array as Sized Array Argument: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

// passing array as an unsized array argument 
void printArrayUnsized(int arr[], int n)
{
	cout << "Array as Unsized Array Argument: ";
	for (int i = 0; i < n; i++) {
		cout << *(arr + i) << " ";
	}
	cout << endl;
}

int main()
{

	int arr[] = { 10, 20, 30 };
	// Call function printArray and pass 
	// array and its size to it. 
	printArraySized(arr, 3);
	printArrayUnsized(arr, 3);

	return 0;
}
