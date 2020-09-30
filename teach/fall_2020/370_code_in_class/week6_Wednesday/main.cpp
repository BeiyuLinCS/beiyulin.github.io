#include <iostream>
using namespace std;

/****************** 1. declare a function. ******************/
double third_power(double x);
double sum_three(double x, double y, double z);
double average_three(double x, double y, double z);
void function_no_type(double x, double y, double z);

/****************** 2. define a function: function heading + function body ******************/
// function heading: function type, function name, input parameters
// function body (anyhting inside of {}): if the function type exists
// we must return something with the same type of the function.
// double x is the Formal parameters;
double third_power(double x)
{
    // method 1:
    double results;
    results = x * x * x;
    return results;

    // method 2:
    // return x * x * x;

    // method 3:
    // double results = x*x*x;
    // return results;

    // the method 3 is similar as below
    // int a = 0;
    // int b;
    // b = 0;

    // anything after the return will be not executed
    cout << "this sentence is after the return statement in the third_power function" << endl;
}

double sum_three(double x, double y, double z){
    double results;
    results = x + y + z;
    return results;}

double average_three(double x, double y, double z){
    double results;
    results = (x + y + z) / 3.0;
    return results;}

// in any program/ project in c++ / c language, we must have one and ONLY one main function.
int main()
{
    /****************** 3. call a function  in "main". ******************/
    // double results_from_call_function;
    // // the value 5 is the actual parameter
    // results_from_call_function = third_power(5);
    // cout << results_from_call_function << endl;

    // equivalent to
    cout << third_power(5) << endl;
    
    cout << sum_three(5, 3, 7) << endl;
    cout << average_three(5, 3, 7) << endl;
    int a; 
    a = 0;
}
