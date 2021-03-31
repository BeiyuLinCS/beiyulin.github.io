#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const int L = 10; // constant
const int LENGTH = 7;
// declare a function 
void print_func(int a, int *b, int array_ex[]);
void assign_value_func(int a_array[]);

void assign_value_func(int a_array[])
{   cout << endl << "haha, we are assigning values to each element of an array" << endl;
    for (int i = 0; i < L; i++)
    {
        a_array[i] = i + 5; // a_array[0] = 10; ... a_array[4] = 14;
    }
}

// define a function. a is a formal parameter
// for array, it pass by the reference (default)
void print_func(int a, int &b, int array_ex[])
{
    cout << "the values before operations" << endl;
    cout << a << endl; // 100
    cout << b << endl; // 200
    a = a + 100; // 200
    b = b + 100; // 300
    cout << endl << "the value of each element in an array is" << endl;
    for (int j = 0; j < L; j++)
    {
        cout << array_ex[j] << endl;
    }
    array_ex[0] = 123456;
}

int main()
{
    string names[LENGTH];
    int IDs[LENGTH];
    int KPI[LENGTH];
    names[0] = "vicky";
    IDs[0] = 1111;
    KPI[0] = 9;

    names[4] = "mike";
    IDs[4] = 4132;
    KPI[4] = 8;

    cout << endl << "the first name is " << names[0] << endl;


    int a_actual = 100;
    int b_actual = 200;
    int num[L]; // define an array

    // give acutal parameter, array
    assign_value_func(num);

    // a_actual is the actual parameter
    // the value of the element with the index 4 = 14;
    print_func(a_actual, b_actual, num);
    // cout << endl << "the values after calling a function" << endl;
    // cout << a_actual<< endl; // 100
    // cout << b_actual << endl; // 300
    cout << endl << "the value of index 0 in num is " << endl;
    cout << num[0] << endl;

    return 0;
}



