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
    char *c_p0;
    c_p0 = c_array; // array pass by address / references.

    /****************** class and pointers;  ******************/
    A a_obj;
    A *p_obj; // * here means to declare a pointer
    p_obj = &a_obj;

    // the lines 62 through 64 are same. 3
    a_obj.a = 'a';
    (*p_obj).a = 'a'; //* means: the value of the pointer points to. 
    p_obj->a = 'a';

    // the lines 67 through 69 are same.
    a_obj.r[2] = 10;
    (*p_obj).r[2] = 10;
    p_obj->r[2] = 10;

    /****************** variables, arrays, classes, and pointers;  ******************/
    A obj_array[100]; // index is from 0-99
    A *p0;
    p0 = obj_array; // is this a right way to assign a pointer to an array object? 

    p0->r[0] = 200;
    cout << endl;
    cout << "somehting new today" << endl;
    cout << obj_array[0].r[0] << endl;

    // assign a character 'k' to the second element (index 1) of the object array, obj_array, variable c;
    // p0+1 <=> po[1]
    // (*(p0 + 1)).c = 'k';
    (p0+1)->c = 'k';
    cout << endl;
    cout << "somehting new today" << endl;
    cout << obj_array[1].c << endl;

    // assign a character 'm' to varaible a in the last element of the object array, obj_array.
    // last element of the object array, obj_array <=> (p0+99)
    // find the variable a in (p0+99) <=> (p0+99)->a
    // assign 'm' to a in (p0+99) <=> (p0+99)->a = 'm'

    (p0 + 99)->a = 'm';
    cout << endl;
    cout << "somehting new today" << endl;
    // cout << (p0 + 99)->a << endl;
    cout << obj_array[99].a << endl;

    return 0;
}
