#include <iostream>
using namespace std;

int main()
{
    // an example for the insert opertor <<
    // cout: print things out on the terminal / console
    // endl: start a new line
    // one statment => compile first (to check if there is any error) => run => results
    
    cout << 23+4 << endl;
    cout << 5-6*20 << endl;
    cout << 56.882 - (34/23) << endl;
    cout << 3*7-6+2*5/4+6 << endl;
    cout << 17.0/4 << endl;

    // anytime when we did the change, please save first. 
    // otherwise, it only compiles the things before the change. 

    // declare variables
    int a;
    int b;
    int c;
    int d;
    
    // 3: letters/package
    // variable a: a mailbox
    // where can we put the mailbox
    // how to allocate the memory for a variable <=> declare a variable
    // a variable has three part:
    // 1. the variable name: a
    // 2. the location of the variable <=> address of a variable
    // 3. the value that assigned to a variable. 

    a = 3; 
    b = 4;

    int i;
    i = 10;

    // 1. declare a variable in order to allocate memory for a variable.
    float x;
    // 2. assign some value to the variable. 
    x = 2.5 + 3.0 * 2 - 6.4;

    // declare a variable with character type
    char char_variable;  // char_variable; charVariable
    char_variable = 'a'; // assign a character 'a' to the variable

    // declare a string variable named str_variable
    string str_variable; // strVariable
    str_variable = "today is Tuesday.";
 

    // how to give the names of variables / identifiers
    // 2 types of variables names:
    // 1. connect words with _ to connect two words
    // 2. captilize for the initial of the letter

    c = (a % b) * 6 + 2 - 1;
    d = c / b;

    cout<< endl;
    cout << "the value of c " << c << endl;
    cout << "the value of d " << d << endl;

    c = 100;
    cout << "the updated value of c is " << c << endl;

}
