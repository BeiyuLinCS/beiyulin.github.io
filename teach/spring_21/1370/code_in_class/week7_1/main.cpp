#include <iostream>
using namespace std;
#include <cmath>


// declare a function; user-defined function 
void cube_func(double *x);

// define a function; user-defined function
// formal parameters 
void cube_func(double &x)
{   
    double result; // allocate a memory for the local variable result for function cube_func.
    result = x * x * x;
    x = x + 5; 

}

int main()
{
    double a = 10;  
    cout << "the value of a before call the function " << a << endl;
    cube_func(a);
    cout << "the value of a AFTER call the function " << a << endl;
    

    // ask a user to input the numbers via the keyboard
    // first ask a user to input how many numbers to sum up
    // then ask a user to input these numbers 
    return 0;
}



