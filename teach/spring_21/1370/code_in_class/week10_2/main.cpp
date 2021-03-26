#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const int L = 5; // constant

int main()
{
    // define an integer
    int n;
    n = 10;

    // define 5 variables and their types are integer
    int n1, n2, n3, n4, n5;
    // assign values 
    n1 = 10;
    n2 = 15;
    n3 = 20;
    n4 = 26;
    n5 = 53;

    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    cout << n4 << endl;
    cout << n5 << endl;

    // define/ delcare array

    int num[L]; // the 5 is the lenght of an array
    // assign value to each element of an array
    // the first element of the array, num, which the index is 0
    // num[0] = 10;
    // num[1] = 15;
    // num[2] = 20;
    // num[3] = 26;
    // num[4] = 53;

    // in general, i means index

    for (int i = 0; i < 2; i++)
    {   
        cout << "please enter an integer for the " << i+1 << "th element of the array" << endl;
        cin >> num[i]; // the last index = length - 1; 
    }

    cout << "the values of each element of the array are: " << endl;

    for (int j = 0; j < L; j++)
    {
        cout << num[j] << endl;
    }

    // Exercises
    // declare an array with 150 elements and the type is double
    double d[150];
    // set the 10th element to 5.6
    // 10the element with index 9 (because index starts with 0)
    d[9] = 5.6;
    // print out the 10th element
    cout << "the 10th element of this array is " << d[9] << endl;

    // set the value for the 72th element
    d[71] = 69.12;
    // assign 72th element to the 12th element
    d[11] = d[71];

    int a , b;
    a = 10;
    b = a; 

    cout << "please enter a number for the 113th element" << endl;
    cin >> d[112];
    


    return 0;
}



