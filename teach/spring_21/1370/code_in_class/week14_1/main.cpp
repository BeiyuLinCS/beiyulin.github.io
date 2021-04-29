#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void print_func(int a[]);

// default: array is passing by reference / address
void print_func(int a[]){
    cout << a[0] << endl;

}
// user-derfined types
class Names{
    public:
        string first_name;
        string last_name;
        int salary[10];
};

int main()
{   int a, b; // int is pre-defined type
    a = 10;
    b = a; // we assign the value of a to the value of b 
    // pass the address of a to another variable c
    int *c; // declare a pointer variable named c
    // a pointer: the value of this pointer is the address of another variable 
    c = &a; // assign the addres of a, &a, to the value of c, c.
    cout << endl << "*c is " << *c << endl;
    a = 100;
    *c = 200; 
    cout << endl << "*c is " << *c << endl;

    int num[100] = {1,2,3,4}; // []
    print_func(num);
    int *p; // *
    p = num; // address of array num

    string str1; // pre-defined type string, str1: variable
    // user-defined typed: Names; a variable n1 (object)
    Names n1; // n1: object
    n1.first_name = "mary";
    n1.last_name = "smith";
    n1.salary[0] = 100;
    n1.salary[1] = 90;
    n1.salary[2] = 85;

    // define a pointer that points to the object n1
    // 1. what's the type of this pointer? 
    Names *p1; 
    p1 = &n1; 

    n1.first_name = "kevin";
    n1.last_name = "garza";
    n1.salary[0] = 150;

    (*p1).first_name = "kevin";
    (*p1).last_name = "garza";
    (*p1).salary[0] = 150;
    
    p1->first_name = "kevin";
    p1->last_name = "garza";
    p1->salary[0] = 150;

    cout << n1.salary[1] << endl;
    cout << p1->salary[1] << endl;

    Names n[31];
    n[0].first_name = "mary";
    n[0].last_name = "smith";
    n[0].salary[0] = 100;
    n[0].salary[1] = 90;
    n[0].salary[2] = 85;




}