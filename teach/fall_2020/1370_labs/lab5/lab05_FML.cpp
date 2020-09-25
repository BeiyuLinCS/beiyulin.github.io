//*************************************************************************
// Gustavo Dietrich
//*************************************************************************
#include <iostream>							// for std I/O (cin, cout)
#include <iomanip>
#include <string>
#include <cmath>
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

int  main( )
{
	// Declares constant PI:3.141592

	// Declares variable name that holds text

	// Declares variables alpha,beta,sina,cosb, and total that hold double precision real numbers

	// Prompts the user to "Please enter your full name: "

	// Reads the full name from keyboard and stores it in the corresponding variable

	// Prompts the user to "Please enter angle alpha: "

	// Reads the value from the keyboard and stores it in the corresponding variable

	// Prompts the user to "Please enter angle beta: "

	// Reads the value from the keyboard and stores it in the corresponding variable

	// Displays "Thanks ", name

	// Calculates the sine of alpha and the cosine of beta, and stores the results in the corresponding variables


	// Calculates the total as the addition of the sine and the cosine and stores it in the corresponding variable

	// Formats the output to display the values in fixed format with three decimal digits

	// Prints a message like the one below:
	// Using 23 columns displays "sine of alpha: ", using 6 columns displays sina

	// Using 23 columns displays "+ cosine of beta: " , using 6 columns displays cosb

	// Using 30 columns displays "-------"

	// Using 23 columns displays "total: ",  using 6 columns displays total
	
	
	system("pause");

	// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(name) == typeid(string));		// Incorrect data type used for name
	test(typeid(alpha) == typeid(1.));			// Incorrect data type used for alpha
	test(typeid(beta) == typeid(1.));			// Incorrect data type used for beta
	test(typeid(sina) == typeid(1.));			// Incorrect data type used for sina
	test(typeid(cosb) == typeid(1.));			// Incorrect data type used for cosb
	test(typeid(total) == typeid(1.));			// Incorrect data type used for total
	if (alpha == 33. && beta == 33.)
		test(fabs(total - 1.384) < 0.0001);		// Incorrect rounding
	if (alpha == 66.45 && beta == 66.45)
		test(fabs(total - 1.317) < 0.0001);		// Incorrect rounding
	if (alpha == 87.33 && beta == 87.33)
		test(fabs(total - 1.046) < 0.0001);		// Incorrect rounding
	system("pause");
    return 0;								//  Successful completion
}

