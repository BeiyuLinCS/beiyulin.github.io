#include <iostream>  // include a library called "iostream" that works for input and output stream
#include <cmath> // cos, sin are included in the library called cmath
// when we want to use a library 
//#include<name_of_the_library>
using namespace std;

// declare a function is always outside of the main function. 
int add_function();
int division_function();

int main()
{
    
    cout << "the cos of 12 is " << cos(12) << endl;
    cout << "the cos of 30 is " << cos(30)<< endl;
    // example of using function pow (Friday, TAs will show how to deinfe a pow function/loop by ourselves)
    // pow(2, 3) 2 to 3 (2 to 3 power)
    cout << "the pow with base 2 is " << pow(2, 3) << endl;

    cout << "start a new line after this sentence" << '\n';
    cout << "new line here" << '\n';
    // '\n' is a very common notation for starting a newline in my programming languages, including C++, C, and Python.

    cout << '\n';
    // five types of variables: int, float / double, char, string, bool
    // read in data from the keyboard is: dafaf dafae teata

    string cheese_pizza;
    cout << "please type strings " << endl;
    // cin >> cheese_pizza;
    getline(cin, cheese_pizza, '.');
    // if my sentece is like this "Today is a good day, and it's sunny. "
    cout << "the readin string is " << cheese_pizza << endl;
    // cin.clear(); // notes: look at this one with more example next Monday.

    // call a function inside of the main function.
    int sum_results, division_results;
    sum_results = add_function();
    division_results = division_function();
    cout << endl;
    cout << endl;
    cout << "the addtion result returned from the self-defined function is " << sum_results << endl;
    cout << "the multiplication of these returned data is " << sum_results * division_results << endl;
}

// quick recall/review of a user-defined function without parameters
// int int_var; int_var = 0;
// first declare a function out of the main ; 
// second define a function out of the main;
// third, call a function in main. 

int add_function(){

    int results;
    results = 2+3;

    return results;
}

int division_function(){
    int division_results;
    division_results = 6/3;
    return division_results;
}