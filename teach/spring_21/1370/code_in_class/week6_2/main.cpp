#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;


// int, double, char, string: pre-defined types for variables
// enumeration type: user-defined types for variables
enum phoneType { HOME, WORK, MOBILE, ADDITIONAL};
enum classLevel {FRESHMAN, SOPHORMORE, JUNIOR, SENIOR};
enum days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int example(int *b, phoneType *p);

int example(int &b, phoneType &p){return 0;}


int main()
{
    days d1, d2;
    d1 = SUNDAY;
    d2 = THURSDAY;

    if (d1 < d2)


    int a = 10;
    phoneType pT;
    pT = HOME;
    example(a, pT); // a and pT are passing by references. 

    int num;// num: -10, 0, 16, ...
    num = -10;

    double d;    // d: -9.01232, 3.1232, 0.000123, 

    classLevel student1_level;
    student1_level = FRESHMAN;

    int num1, num2;
    num1 = 10;
    num2 = num1; // the value of num2: 10;

    phoneType p1Type, p2Type; 
    p1Type = ADDITIONAL;
    p2Type = WORK; 

    if (p1Type < MOBILE)
    {
        cout << "less than statement is true" << endl;
    }else {
        cout << "less than statement is false" << endl;
    }



    return 0;
}



