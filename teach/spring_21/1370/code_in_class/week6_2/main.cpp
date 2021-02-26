#include <iostream>
using namespace std;
#include <cmath>


// declare a function; user-defined function 
double cube_func(double x);
double pow_func(double x, int p);
void sum_func();
double average_func();

// define a function; user-defined function
double cube_func(double x)
{   
    double result; // allocate a memory for the local variable result for function cube_func.
    result = x * x * x;
    return result;
}

// define a power function
double pow_func(double x, int p)
{
    double result;
    result = 1;
    for (int i = 0; i < p; i++)
    {
        result = x * result;
    }
    return result;
}

void sum_func()
{
    int num_input; // 4
    double num;

    double sum_res = 0;

    cout << "please tell me how many numbers to sum up" << endl;
    cin >> num_input;

    // the loop will run 4 times; i would be 0, 1, 2, 3;
    for (int i = 0; i < num_input; i++)
    {
        cout << "please input the number " << i+1 << endl;
        cin >> num; // 3; 7; 5; 5; 
        sum_res = sum_res + num; // sum_res = 0 + 3; sum_res = 3 + 7 = 10; sum_res = 10 + 5 = 15; sum_res = 15 + 5 = 20; 
    }
    cout <<"the sum is "<< sum_res << endl;
}

double average_func()
{
    int num_input; // 4
    double num;

    double sum_res = 0;

    cout << "please tell me how many numbers to sum up" << endl;
    cin >> num_input;

    // the loop will run 4 times; i would be 0, 1, 2, 3;
    for (int i = 0; i < num_input; i++)
    {
        cout << "please input a number to sum up " << endl;
        cin >> num;              // 3; 7; 5; 5;
        sum_res = sum_res + num; // sum_res = 0 + 3; sum_res = 3 + 7 = 10; sum_res = 10 + 5 = 15; sum_res = 15 + 5 = 20;
    }
    return sum_res /1.0/ num_input;
}

int main()
{
    // pre-defined functions; call a function
    cout << pow(2,3) << endl;
    // call a user-defined function
    cout << "the results of the user-defined power function is " << endl;
    cout << pow_func(2, 3) << endl; // 8
    cout << pow_func(3, 2) << endl; // 9

    
    sum_func(); 

    double ave_res;
    ave_res = average_func();
    cout << ave_res << endl;

    cout << average_func() << endl;

    // ask a user to input the numbers via the keyboard
    // first ask a user to input how many numbers to sum up
    // then ask a user to input these numbers 
    return 0;
}



