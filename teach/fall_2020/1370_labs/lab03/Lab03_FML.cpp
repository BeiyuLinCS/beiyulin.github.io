/////////////////////////////////////////////////////////////////////
//
// Name: <Put your name here>
// Date: <Today's date>
// Class: <Your class number and section number, like: CSCI 1370.02>
// Semester: <This semester, like: Spring 2012>
// CSCI/CMPE 1370 Instructor: <Your lecture instructor's name>
//
// Using your own words describe below what the program does 
// Program Description: 
//
/////////////////////////////////////////////////////////////////////

#include <iostream>				// to be able to use cin  and cout
#include <typeinfo>				// to be able to use operator typeid
// Include here all the other libraries that required for the program to compile


using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

int main()
{
//Declare variables named price, tax, and total that hold single precision real numbers.

//Prompt the user to "Enter the price and tax (%) please: ".

//Read the values from the keyboard and store them in price and tax respectively.

//Calculate the total cost using the expression Price * (1 + Taxes/100) and assign the resulting value to total.

// Round the value of total to integer and reassign the rounded value to total 

//Format the output to display the values in fixed format with integer.

//Print a message like the one below:
//
//		“For a price $”, P, “and “, X “% tax, the total cost of the product is $”, T
//
//where P, X, and T are the values corresponding to variables price, tax, and total respectively.



	system("pause");	// this is to stop the execution when the exe is used
						// for running the program

	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(price) == typeid(float));		// Incorrect data type used for price
	test(typeid(tax) == typeid(float));			// Incorrect data type used for tax
	test(typeid(total) == typeid(float));		// Incorrect data type used for total
	if (price == 100.0 && tax == 8.25)			// Incorrect rounding of total
		test(fabs(total - 108.30) < 0.001);

	system("pause");
	
	return 0;		// successful termination
}
