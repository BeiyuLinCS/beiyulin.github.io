#include <iostream>
using namespace std;
#include <cmath>

// user defined function
// 1. declare a function (with all the types and finish with ;)
// 2. define a function (with all the types, function body, andreturn a value)
// 3. call a function (without all the types <=> function_name(the value of parameters))

// main function 
// there is only one main function in each project
// type_of_a_function name_of_a_function(input parameters)<=> function heading
// {statements
// return the_type_as_the_function_type;
// } <=> function body

// declare a function;
double cube_func(double x);

// user defined function
// input parameters are passing around different functions.
// stream input from the user is using "cin" to read in data from the keyboard.

// define a function
double cube_func(double x)
{
    double results; // local variable
    results = x * x * x;
    return results; // we return the value of the local variable: results
}

int main()
{
    // sqrt is a pre-defined function that is in the cmath library
    double a ;
    // only need the name of the function and assign the input of the function
    a = sqrt(10); // pre-defined functions in library
    cout << "the square root of 10 is " << a << endl;
    cout << floor(48.98) << endl; // call the pre-defined floor function that is in the cmath library. 
    cout << pow(2,3) << endl;
    cout << pow(3,2) << endl;
    // how to declare a variable
    int num; //int 1num; any variable can not start with a number;
    num = 0;
    string str;

    // call a function
    cout << endl;
    cout << endl;
    cout << "the cube of 3 is this " << endl;
    cout << cube_func(a) << endl; // x = a; 

    // there is pre-defined function to calculate the power
    // use a for / while loop to calculate the power 2^3 = 2*2*2
    // we define a function (user-defined function) to calculate the power

    return num;
}



