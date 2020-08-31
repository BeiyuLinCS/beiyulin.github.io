//******************************************************************************
// Team #          CSCI/CMPE 1370      Spring 2020                    Homework # 1
// First and Last Name
// First and Last Name
//  Using your own words, write here a description of what the program does. 
// 
//******************************************************************************

#include <iostream>				// to be able to use cout
#include <typeinfo>				// to be able to use operator typeid

// Include here all the libraries that you need for your program to compile



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
// Enter here your algorithm as a series of MEANINGFUL steps.
// write below EACH step the C++ statements that implement it.





// this is to stop the execution when the exe is used for running the program
	cout << "Press Enter to continue ...";
	cin.sync();
	cin.ignore();
	cin.get();

// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(DOL2MEX) == typeid(1.));			// Incorrect data type used for DOL2MEX
	test(typeid(DOL2EURO) == typeid(1.));			// Incorrect data type used for DOL2EURO
	test(typeid(pesos) == typeid(1.));				// Incorrect data type used for pesos
	test(typeid(euros) == typeid(1.));				// Incorrect data type used for euros
	test(typeid(wholedollarsp) == typeid(1));		// Incorrect data type used for wholedollarsp
	test(typeid(centdollarsp) == typeid(1));		// Incorrect data type used for centdollarsp
	test(typeid(wholedollarse) == typeid(1));		// Incorrect data type used for wholedollarse
	test(typeid(centdollarse) == typeid(1));		// Incorrect data type used for centdollarse
	test(typeid(wholetotal) == typeid(1));			// Incorrect data type used for wholetotal
	test(typeid(centtotal) == typeid(1));			// Incorrect data type used for centtotal
	if (pesos == 120.0 && euros == 120.0)			// Does not pass test 1
	{
		test(wholedollarsp == 6 && centdollarsp == 44);
		test(wholedollarse == 130 && centdollarse == 43);
		test(wholetotal == 136 && centtotal == 87);
	}
	if (pesos == 134.09 && euros == 220.16)				// Does not pass test 2
	{
		test(wholedollarsp == 7 && centdollarsp == 20);
		test(wholedollarse == 239 && centdollarse == 30);
		test(wholetotal == 246 && centtotal == 50);
	}
	if (pesos == 1042.90 && euros == 275.99)			// Does not pass test 3
	{
		test(wholedollarsp == 56 && centdollarsp == 1);
		test(wholedollarse == 299 && centdollarse == 99);
		test(wholetotal == 356 && centtotal == 0);
	}
	if (pesos == 231.82 && euros == 271.08)				// Does not pass test 4
	{
		test(wholedollarsp == 12 && centdollarsp == 45);
		test(wholedollarse == 294 && centdollarse == 65);
		test(wholetotal == 307 && centtotal == 10);
	}

	return 0;
}
