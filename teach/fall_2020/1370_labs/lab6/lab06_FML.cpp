#include <iostream>				// to use cin and cout
#include <typeinfo>				// to be able to use operator typeid

// Include here the libraries that your program needs to compile


using namespace std;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Insert here the prototype of the function here


int main()
{
// Declare variable value, valuero that hold double precision real numbers

// Declare variable decdig that holds whole numbers

// Prompt the user to "Enter the real number: "

// Read from keyboard the value entered by the user and assign it to value

// Prompt the user to "Enter number of digits: "

// Read from keyboard the value entered by the user and assign it to decdig

// Round the real number to the number of decimal digits specified and assign the result to valuero

// Format the output to display the numbers in fixed format with ten decimal digits

// Display on the screen, using 23 columns, the message
//	   "The original number is ", value

// Format the output to display the numbers in fixed format with the number of decimal digits specified plus 2

// Display on the screen, using 23 columns, the message
//	   "The rounded number is ", valuero


	system("pause");

// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(value) == typeid(1.));										// Incorrect data type used for value
	test(typeid(valuero) == typeid(1.));									// Incorrect data type used for valuero
	test(typeid(decdig) == typeid(1));										// Incorrect data type used for decdig
	
	/* Include these tests once the function has been implemented

	test(fabs(round_off(125.123456789,2) - 125.12 ) < 0.001);				// Incorrect rounding to two decimal digits 
	test(fabs(round_off(125.123456789,4) - 125.1235) < 0.00001);			// Incorrect rounding to four decimal digits 
	test(fabs(round_off(125.987654321,0) - 126.) < 0.001);					// Incorrect rounding to no decimal digits 
	test(fabs(round_off(125.987654321, 5) - 125.98765) < 0.000001);			// Incorrect rounding to five decimal digits 
	*/ 

	system("pause");

	return 0;
}



//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// Rounds the value received in the first parameter to the number of digits received in the second parameter
