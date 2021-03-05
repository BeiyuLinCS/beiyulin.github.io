#include <iostream>
using namespace std;
#include <cmath>


// declare a function; user-defined function
void get_numbers(int *num1, int *num2);
void sum_diff_func(double num1, double num2, double *sum_res, double *diff_res);
void large_small_func(double *largest, double *smallest);


// define a function; user-defined function
void get_numbers(int &num1, int &num2)
{   
    cout << endl << "please input two integers to pass back to the main function" << endl;
    cin >> num1;
    cin >> num2;
}

void sum_diff_func(double num1, double num2, double &sum_res, double &diff_res)
{
    cout << "please input a number" << endl;
    cin >> num2; 
    sum_res = num1 + num2;
    diff_res = abs((num1 - num2));
}

void large_small_func(double &largest, double &smallest)
{
    int num = 0;
    largest = -10000000; // initialize the variable; 
    smallest = 10000000;
    cout << "input a number" << endl;
    while(num != -1)
    {
        cin >> num; // 1

        if (num > largest){largest = num;}
        if (num < smallest){smallest = num;}

    }


}

int main()
{
    // int a, b; // declare two variables; 
    // get_numbers(a, b);
    // cout << "the value of a is " << a << endl;
    // cout << "the value of b is " << b << endl;

    // pseduo code: 
    // there are two variables: 
    // - one number is initialized here
    // - one number is passed as a variable; get the value in the function using cin 
    // define two variables: sum_res, diff_res
    // when call the function, we pass these two variables by references
    // double num1, num2, sum_res, diff_res;
    // num1 = 16;
    // sum_diff_func(num1, num2, sum_res, diff_res);
    // cout << "the sum of the two numbers is " <<  sum_res << endl;
    // cout << "the diff of the two numbers is " << diff_res << endl;
    double largest, smallest;
    large_small_func(largest, smallest);
    cout << "the largest, smallest values are " << largest << ", " << smallest << endl;

    return 0;
}



