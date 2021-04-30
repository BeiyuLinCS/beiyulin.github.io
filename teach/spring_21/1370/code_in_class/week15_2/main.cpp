#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// user-derfined types
class Names
{
public:
    string first_name;
    string last_name;
    int salary[10];
};

void print_func(int a[]);
void special_func(Names *n_names, int *num10, Names n_names2, int num20);

// default: array is passing by reference / address
void print_func(int a[])
{
    cout << a[0] << endl;
}

void special_func(Names *n_names, int &num10, Names n_names2, int num20)
{
    // passing by value 
    cout << endl << (*n_names).first_name << endl;
    num10 = num10*2; 
    (*n_names).first_name = "Pancho";

    cout << endl << (n_names2).first_name << endl;
    cout << endl << num20 << endl;

    n_names2.first_name = "Friday";
    num20 = 700;

}

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
    p1 = &n1; // an object / variable , its type is used defined class

    n1.first_name = "Tony";
    n1.last_name = "garza";
    n1.salary[0] = 150;

    (*p1).first_name = "kevin";
    (*p1).last_name = "garza";
    (*p1).salary[0] = 150;

    p1->first_name = "Tony";
    p1->last_name = "garza";
    p1->salary[0] = 150;

    cout << n1.salary[1] << endl;
    cout << p1->salary[1] << endl;

    int num10;
    num10 = 12345678;
    int num20;
    num20 = 123;
    // both are passing by reference using a pointer. 
    Names n2;
    n2.first_name = "Thursday";
    special_func(&n1, num10, n2, num20);
    cout << endl << "the first name of n1 is " << n1.first_name << endl;
    cout << endl << "the value of num10  " << num10 << endl;
    cout << endl << "the first name of n2 after running the function " << n2.first_name <<endl;
    cout << endl << "the value of num20 " << num20 << endl;


    Names n[31];
    n[0].first_name = "mary";
    n[0].last_name = "smith";
    n[0].salary[0] = 100;
    n[0].salary[1] = 90;
    n[0].salary[2] = 85;

    n[9].first_name = "john";

    // can we assgin a pointer to the array based object n? 
    // declare a pointer
    Names *n_pointer;
    n_pointer = n;

    (*n_pointer).first_name = "kevin";
    (*n_pointer).last_name = "garza";
    (*n_pointer).salary[0] = 95;

    // update the the first name for the 10th element of the array
    (*(n_pointer + 9)).first_name = "john";

    (n_pointer+9)->first_name = "alex";

    cout << endl << n[0].first_name << endl;
    cout << endl << n[0].last_name << endl;
    cout << endl << n[9].first_name << endl;

    

}