#include <iostream>				// to use cin and cout
#include <typeinfo>				// to be able to use operator typeid
// Include here the libraries that your program needs to compile


using namespace std ;

// Ignore this; it's a little function used for making tests
inline void _test(const char* expression, const char* file, int line)
{
	cerr << "test(" << expression << ") failed in file " << file;
	cerr << ", line " << line << "." << endl << endl;
}
// This goes along with the above function...don't worry about it
#define test(EXPRESSION) ((EXPRESSION) ? (void)0 : _test(#EXPRESSION, __FILE__, __LINE__))

// Insert here the prototypes of the functions

// Declare a global constant variable called PI that holds value 3.141592

int main()
{
// Declare a variable named name that holds text

// Declares variables named height and radius that hold whole numbers

// Declare a variable named volume that holds double precision real numbers

// Prompts the user "May I get your first name please?: "

// Read the value from the keyboard and stores it in name

// Prompt the user "Thanks ", name, " , now enter radius and height of the cone please: "

// Read the values from the keyboard and stores them in radius and height respectively

// Call function volume_cone() to calculate the volume of the cone and assign the result to volume 

// Call function print_data() to print the values entered by the user and the volume of the cone




	system("pause");	// this is not required but the students can include it if they like

// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(PI) == typeid(1.));							// Incorrect data type used for PI
	test(PI == 3.141592);									// Incorrect value used for PI
	test(typeid(name) == typeid(string));					// Incorrect data type used for name
	test(typeid(height) == typeid(1));						// Incorrect data type used for height
	test(typeid(radius) == typeid(1));						// Incorrect data type used for radius
	test(typeid(volume) == typeid(1.));						// Incorrect data type used for volume
	test(fabs(volume_cone(3,5) - 47.124) < 0.0001);			// Incorrect rounding of volume
	test(fabs(volume_cone(3, 4) - 37.699) < 0.0001);		// Incorrect rounding of volume
	system("pause");
	return 0;
}


//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement

// Calculates the square of the value received


// Calculates the volume of the cone using the formula 1 / 3 x Pi x radius^2 x height


// Rounds the value received in the first parameter to the number of digits received in the second parameter


// Prints the volume of the cone
