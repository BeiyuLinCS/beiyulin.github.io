#include <iostream>
using namespace std;

/****************** 1. declare a function. ******************/
void a_function(int a, int* b);

/****************** 2. define a function: function heading + function body ******************/
// function heading: function type, function name, input parameters
// function body (anyhting inside of {}): if the function type exists
// we must return something with the same type of the function.
// double x is the Formal parameters;
void a_function(int a, int& b){
    a = a + 1; // the updated a value here is 4 = 3 + 1;
    b = b + 1; // the updated b value here is 5 = 4 + 1;
}

// in any program/ project in c++ / c language, we must have one and ONLY one main function.
int main()
{   
    // allocate memory for variables;
    int num1, num2;

    // assign value for variables
    num1 = 3;
    num2 = 4;
    a_function(num1, num2);
    cout << "num1 is: " << num1 << endl;
    cout << "num2 is: " << num2 << endl;
}
