#include "myfunctions.h"



int main()
{
    A x; // declare an object named x with the type of the class A.
    x.a = '7';
    x.b = 'b';
    x.c = 'a';

    A *p;
    p = &x;


    (*p).a = '9';
    (*p).b = 'K';
    p->b = 'G';
    p->r[0] = 100;

    cout << x.r[0] << endl;
    cout << x.b << endl;

    return 0;
}
