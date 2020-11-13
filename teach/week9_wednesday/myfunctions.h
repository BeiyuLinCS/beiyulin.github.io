// the header file of the c++ program. 
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

class Date{
    public:
        int year;
        int month;
        int day;
        Date();
        Date(int yr, int mth, int d);
        void print();
        void before(Date d1, Date d2);
};

Date::Date()
{
    year = 2020;
    month = 10;
    day = 15;
}

Date::Date(int yr, int mth, int d)
{
    year = yr;
    month = mth;
    day = d;
}

void Date::print()
{
    cout << year << '/' << month << '/' << day << endl;
}

// we want to know if d2 is before d1 or not.
void Date::before(Date d1, Date d2)
{
    //if (d1.year > d2.year) {cout << “true” << endl;}
    //else if (d1.year == d2.year & d1.month > d2.month) {cout << “true” << endl;}
    //else if (d1.year == d2.year & d1.month == d2.month &
    //	d1.day > d2.day) {cout << “true” << endl;}
    //else{cout << “false” << endl;}

    if (d1.year > d2.year || (d1.year == d2.year && d1.month > d2.month) ||
        (d1.year == d2.year && d1.month == d2.month &&
         d1.day > d2.day))
    {
        cout << "TRUE" << endl;
    }
    else
    {
        cout << "FALSE" << endl;
    }
}
