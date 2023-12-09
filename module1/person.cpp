//============================================================================
// Name        : person.cpp
// Author      : Michael Masters
// Assignment  : CSC450 Module 1 CTA
// Description : Prints the following information for a fictional person:
//				- First Name, Last Name, Street Address, City, Zip code.
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {

	/* Declare a variable for each attribute of the fictional person "Harry Potter" */
	std::string firstName = "Harry";
	std::string lastName = "Potter";
	std::string streetAddress = "4 Privet Dr.";
	std::string city = "Little Whinging";
	std::string zipCode = "80920";

	/* Prints Harry's info to the console using cout. */
	std::cout << "Name: " + firstName + " " + lastName << std::endl;
	std::cout << "Address: " + streetAddress + " " + city + " " + zipCode << std::endl;

	return 0;
}
