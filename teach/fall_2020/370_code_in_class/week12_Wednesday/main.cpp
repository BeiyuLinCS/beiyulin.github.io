#include "myfunctions.h"

int main()
{
    /****************** variables and pointers;  ******************/

    int x= 15;
    int *p;
    // assign the pointer p to the varaible x.
    p = &x;

    string s = "hello worlds.";
    string *str_p; 
    // assign the string pointer to the string variable;
    str_p = &s;

    char c;
    char *c_p; // the pointer must have the same type as the variable. 
    c_p = &c;

    bool b;
    bool *b_p;
    b_p = &b;

    x = 67;
    *p = 67; // *p <=> the value that a pointer pointed to. 

    // are the lines 29 through 32 are doing the same thing or not?   
    // x = x + 10; // the value of x = 67 + 10 = 77
    // x = *p + 10; // *p <=> the value of x = 67; *p + 10 = 77
    // *p = x + 10;
    *p = *p + 10; // *p <=> the value of x = 67;

    float f;
    float *f_p = NULL;
    if (f_p != NULL) {
        cout << "inside of the if condition" << endl;
        cout << *f_p << endl;
    }

    f = 19.0987655;
    f_p = &f;

    cout << "outside" << endl;
    cout << *f_p << endl;

    /****************** array and pointers;  ******************/

    char c_array[100] = {'a', 'b', 'c'};
    c_array[3] = '\0';    
    string str = "abc";

    char *c_p;
    c_p = c_array; // array pass by address / references.

    /****************** class and pointers;  ******************/
    A a_obj;
    A *p_obj;
    p_obj = &a_obj;

    // the lines 62 through 64 are same. 3
    a_obj.a = 'a';
    (*p_obj).a = 'a';
    p_obj->a = 'a';

    // the lines 67 through 69 are same.
    a_obj.r[2] = 10;
    (*p_obj).r[2] = 10;
    p_obj->r[2] = 10;

    return 0;
}
