#include <iostream>
#include <string>
// fstream includes both the output file stream and input file stream.
using namespace std;

int main()
{   
    
    // declare a constant variable
    const int ARRAY_SIZE = 15;
    // assign value to the constant variable
    // declare an array with the length 15
    int array_variable1[ARRAY_SIZE];
    for (int j = 0; j < ARRAY_SIZE; j++)
    {
        array_variable1[j] = j + 1;
        // cout << "the index is " << j << " the value is " << array_variable1[j] <<endl;
    }

    // declare  5 variable with it's name
    int num1,
    num2, num3, num4, num5;
    // assign value to these variables
    num1 = 10;
    num2 = 10;
    num3 = 10;
    num4 = 10;
    num5 = 10;

    // how to use a concise and easy way to do
    // array <=> list
    // declare an array variable: type variable_name[array_length];
    int num_list[100];
    int num_list2[100]; // the last index of an array = its length - 1; 
    // for(int i = start_number; i < end_number; i++){}
    // assign value to each element of the array 
    for(int i=0; i <= 99; i++)
    {
        num_list[i] = i + 5;
        // looking for the i, such that i+5 = 64 <=> i = 59;
        // cout << "the index is: " << i << " the value is : " <<num_list[i] << endl;
    }

    // let's do a search using a for loop
    for (int i = 0; i <= 99; i++)
    {
        num_list2[i] = num_list[i];
        cout << num_list2[i] << endl;

        if (num_list[i] == 64){
            cout << "haha, we find the number 64!" << endl;
            cout << "the corresponding the index is " << i << endl;
        }
    }

    // int num_list2[1]; // 1: the length of the array <=> the number of the element of the array.
    // // what are the indexes of this array.
    // // we will have only one element with the index 0
    // num_list2[0] = 10;
    
    // slide number 10
    // int list_var[10];
    // list_var[3] = 10;
    // list_var[6] = 35;
    // list_var[5] = list_var[3] + list_var[6];
    // cout << endl;
    // cout << "list_var[3] " << list_var[3] << endl;
    // cout << "list_var[6] " << list_var[6] << endl;
    // cout << "list_var[5] " << list_var[5] << endl;


    // int length_from_keyboard;
    // cout << "input a number for the length of an array" << endl;
    // cin >> length_from_keyboard;

    // int array3[length_from_keyboard];
    // array3[length_from_keyboard-1] = 20;
    // cout << "the last element of array3 is " << array3[length_from_keyboard - 1] << endl;

    // summary of declare an array variable
    // type array_varaible_name[lenght_of_array]
    // int num_array[length]
    // length could be defined by three ways:
    // 1. directly give a number <=> int num_array[10];
    // 2. use a constant variable as the length <=> lines 10-13: int array_variable1[ARRAY_SIZE];
    // 3. define the length via the input from  the keyboard using "cin" <=> lines 58-63
}
