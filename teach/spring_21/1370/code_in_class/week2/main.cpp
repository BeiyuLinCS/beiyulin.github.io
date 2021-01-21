#include <iostream>
using namespace std;

int main()
{
    cout << "the test of the modulus for integral data types" << endl;
    cout << 10%2 << endl;
    // cout << 10.2 % 2 << endl;

    // num: number
    // 1. allocate momery for variable named num;
    short int num;
    // 2. assign a value to the variable;
    num = -67;
    cout << endl; 
    cout << "the case for the over flow" << endl;
    cout << num << endl;
    num = num + 10; // update the num value by adding 1
    cout << num << endl;

    // 1. allocate memory for a boolean variable named flag
    bool flag; 
    // 2. asggin value to the variable;
    flag = false;
    cout << endl << "the case for boolean variable" << endl;
    cout << flag << endl;

    cout << endl << "cases for mixed expressions" << endl;
    cout << 6 / 4 + 3.9 << endl;

    // var: variable; num: number;
    double var;
    var = 4;
    cout << 6/ var << endl;

    double var1;
    var1 = 4.5677;
    cout << int(var1) << endl;


}
