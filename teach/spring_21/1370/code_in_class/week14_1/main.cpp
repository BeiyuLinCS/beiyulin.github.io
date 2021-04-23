#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void print_func(int a[]);

// default: array is passing by reference / address
void print_func(int a[]){
    cout << a[0] << endl;

}

int main()
{   int a, b;
    a = 10;
    b = a; // we assign the value of a to the value of b 

    // pass the address of a to another variable c
    int *c; // declare a pointer variable named c
    // a pointer: the value of this pointer is the address of another variable 
    
    c = &a; // assign the addres of a, &a, to the value of c, c.
    // the value that the pointer pointed to
    cout << endl << "*c is " << *c << endl;
    *c = 500;
    cout << endl << "*c is " << *c << endl;

    
    int num[100] = {1,2,3,4}; // []
    print_func(num);

    int *p; // *
    p = num; // address of array num



}