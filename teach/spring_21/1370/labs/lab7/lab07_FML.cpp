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

// Insert here the prototypes of the functions



// Declare a global constant variable named PI that holds value 3.141592

int main()
{
// Declare variables named side, radius, s_cube, and s_sphere that hold double precision real numbers

// Prompt the user to "Enter side of cube : "

// Read from keyboard the value entered by the user and assign it to side

// Prompt the user to "Enter radius of sphere : "

// Read from keyboard the value entered by the user and assign it to radius

// Call cube_surf() to calculate the surface of the cube and assign the result to s_cube

// Call sphere_surf() to calculate the surface of the sphere and assign the result to s_sphere

// Clear the screen

// Format the output to display the numbers in fixed format with two decimal digits

// Display on the screen the message
//	   "The surface area of a cube of sides ", side,   " is ", s_cube
//	"The surface area of a sphere of radius ", radius, " is ", s_sphere



	system("pause");

// Do NOT remove or modify the following statements
	cout << endl << "Testing your solution" << endl << endl;
	test(typeid(side) == typeid(1.));						// Incorrect data type used for side
	test(typeid(radius) == typeid(1.));						// Incorrect data type used for radius
	test(typeid(s_cube) == typeid(1.));						// Incorrect data type used for s_cube
	test(typeid(s_sphere) == typeid(1.));					// Incorrect data type used for s_sphere
	test(fabs(cube_surf(3.36) - 67.74) < 0.001);			// Incorrect rounding of value returned by cube_surf() 
	test(fabs(cube_surf(3.37) - 68.14) < 0.001);			// Incorrect rounding of value returned by cube_surf()
	test(fabs(sphere_surf(4.23) - 224.85) < 0.001);			// Incorrect rounding of value returned by sphere_surf()
	test(fabs(sphere_surf(4.29) - 231.27) < 0.001);			// Incorrect rounding of value returned by sphere_surf()

	system("pause");
	
	return 0;
}



//************************  Function definition  *************************
// Read the handout carefully for detailed description of the functions that you have to implement


// Calculate the square of the value received



// Calculate the surface area of the cube using the formula 6 x side^2 (six times the square of the side of the cube)



// Calculate the surface area of the sphere using the formula 4 x Pi x radius^2 (four times Pi times the square of the radius of the sphere)


// Rounds the value received in the first parameter to the number of digits received in the second parameter

