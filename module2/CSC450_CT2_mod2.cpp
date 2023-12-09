//============================================================================
// Name        : CSC450 Module 2 Critical Thinking Assignment
// Author      : Michael Masters
// Description : Take (2) String inputs from user, concatenate them, print to console, repeat 3 times.
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	string firstName;  // Variable to store input from user as first name.
	string lastName;   // Variable to store input from user as last name.
	int i = 0;	   // Variable to control loop.

	// Prompts user for first and last name.
	// Reads in input as String.
	// Input is concatenated and then printed to console.
	// Repeats 3 times.
	while (i < 3) {

		cout << "What is your first name? ";
		cin >> firstName;

		cout << "What is your last name? ";
		cin >> lastName;

		cout << "Your name is " + firstName + " " + lastName + "." << endl;

		i++;
	}

	return 0;
}
