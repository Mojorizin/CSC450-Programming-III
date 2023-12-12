#include <iostream>
using namespace std;

int main()
{
	// Create (3) pointers and allocate dynamic memory for (3) integers.
	int* pNums = new int[3];

	// Prompt user for (3) numbers and store in pNums[0], pNums[1], pNums[2];
	cout << "Enter three numbers: ";
	for (int i = 0; i < 3; i++) {
		cin >> pNums[i];
	}

	// Print out the value and address of each pointer.
	for (int i = 0; i < 3; i++) {
		cout << "The value of pNums[" << i << "] is " << pNums[i] << " Address: " << pNums + i << endl; 
	}
	
	// Release dynamic memory.
	delete[] pNums;
}
