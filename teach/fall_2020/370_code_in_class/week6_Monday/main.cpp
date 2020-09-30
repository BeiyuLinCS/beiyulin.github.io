#include <iostream>
#include <cmath>
#include <cstdlib>
// include an existing library 
//#include <name_of_the_library>
using namespace std;
// declare a user-defined function (with out any input parameters) before defining it.
// float user_power();

// declare a user-defined function (with out any input parameters) before defining it.
// type_of_the_function function_name(type_of_the_input_para1 name_input_para1, type_of_the_input_para2 name_input_para2)
float user_power(int base_x, int power_y);

// define a function
float user_power(int base_x, int power_y){

    int results;
    results = 1;

    // want to calcualte 2^3 = 2*2*2; do three iteration;
    for (int i = 0; i < power_y; i++)
    {
        cout << "the value of i is " << i << endl;
        results = results * base_x;
    }
    cout << "the results is " << results << endl;

    return 0.0;
}



int main()
{
    // Returns the largest integer that is smaller than or equal to x
    // equal to x if and only if x is an integer
    // (i.e : rounds **down** the nearest integer)
    cout << floor(2) << endl;
    cout << floor(2.3) << endl;
    cout << floor(2.8) << endl;
    cout << floor(-2.8) << endl; // -3 < -2.8

    // example of **call** a pre-defined function "pow"
    // allocate the memory for a values
    int z1, z2; 
    int x, y;
    // cout << "please input the base value of the power function" <<endl;
    // cin  >> x;
    // cout << "please input the power value of the power function" << endl;
    // cin >> y;

    // the order of input parameters can not be changed; 
    // pre-defined function in the cmath library
    z1 = pow(2,3); //8
    z2 = pow(2,4); //16

    // how to use the return value: one use is to print out on the screen / terminal 
    cout << "the value of z is " << z1 << endl; //print out the results. 
    // another use is to caluclate other things based on the return from functions (pre-defined / user-defined)
    cout << "the value of z1+z2 is " << z1+z2 << endl; //print out the results.
    cout << "the absoluate value of -5 is " << abs(-5) << endl; //call a pre-defined function "abs" that returns the absoluate value of a given number;

    // user_power();

    // call a user-defined function with input parameters
    user_power(2, 3);
}
