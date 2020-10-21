#include <iostream>
using namespace std;

/******** declare a function is always outside of the main function.  ********/
int add_function(int arry[], int len_arr);

/******** define a function  ********/
int add_function(int arry[], int len_arr)
{
    for (int i = 0; i < len_arr; i++)
    {

        cout << arry[i] << endl;
    }
    return 0;
}

/******** declare a function (allocate memory for a function) is always outside of the main function.  ********/
int add_function1(int *input_var);

/******** define a function (assign the value to a vraible)  ********/
int add_function1(int &input_var)
{
    // int results;
    // cout << "the value of the input variable is " << input_var << endl;
    input_var += input_var; // add itself twice
    return input_var;
}

/**************************************** array and function **************************************************
******** declare a function (allocate memory for a function) is always outside of the main function.  ********/
int add_array_func(int input_var[], int len_array);

/******** define a function (assign the value to a vraible)  ********/
int add_array_func(int input_var[], int len_array)
{   
    for( int i = 0; i < len_array; i++)
    {
        input_var[i] += 10; // we will get input_var[0]: 15; input_var[1]: 16
    }

    // we will get input_var[0]: 15; input_var[1]: 16;
    return input_var[0] + input_var[1];
}

int main()
{
    int number;
    number = 10;

    /******** call a function ********/
    cout << "the returned value is " << add_function(number) << endl;
    cout << "the value of number in main function is " << number << endl;


    int array_var[2];
    array_var[0] = 5;
    array_var[1] = 6;

    for (int i = 0; i < 2; i++)
    {
        cout << "the value of i is " << i << " ";
        array_var[i] = i + 5;
        cout << "the value of array is " << array_var[i] << endl;
    }

    cout << "the return is " << add_array_func(array_var, 2) << endl;
    cout << "the first element with the index 0 is " << array_var[0] << endl;
}



