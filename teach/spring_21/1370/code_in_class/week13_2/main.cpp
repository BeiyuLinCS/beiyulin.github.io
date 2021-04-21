#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// declare / define a class;
class Date{
    public:
        // members
        int year, month, day;
        // declare constructor
        Date(int y, int m, int d);
        // declare a method
        bool cmp_before(Date t1);
};

// define a class Rectangle
class Rectangle{
    public:
        double height, width;
        // declare methods
        void set_size();
        double area();
};

// define methods
void Rectangle::set_size(){
    cout << endl << "please enter the values of height and width" << endl;
    cin >> height >> width;
}

double Rectangle::area(){
    return height*width;
}

// define a constructor
Date::Date(int y, int m, int d){
    year = y;
    month = m;
    day = d;
}

// define a method
bool Date::cmp_before(Date t1){
    // whether d1 is before today1 or not
    if (year < t1.year)
    {
        return true;
    }
    else if (year == t1.year && month < t1.month)
    {
        return true;
    }
    else if (year == t1.year && month == t1.month && day < t1.day)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void print_func(int *a);
void print_func(int &a){
    a = a + 100;
}


// declare a function
bool compare_before(Date d1, Date today1);

// define a function
bool compare_before(Date d1, Date today1)
{
    // whether d1 is before today1 or not
    if (d1.year < today1.year){
        return true;
    }else if (d1.year == today1.year && d1.month < today1.month){
        return true;
    }
    else if (d1.year == today1.year && d1.month == today1.month && d1.day < today1.day)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{   
    // define two objects with the class type Date
    Date appt(2010, 4, 10);
    Date today(2010, 4, 14);
    cout << endl << compare_before(appt, today) << endl;
    cout << appt.cmp_before(today) << endl;
        
    if (!appt.cmp_before(today)){
        cout << "we did not miss it" << endl;
    }else {
        cout << "haha, we missed it." << endl;
        
    }

    Rectangle r1;
    r1.set_size();
    cout << "the area of this rectangle is " << r1.area() << endl;
    r1.set_size();
    cout << "the area of this rectangle is " << r1.area() << endl;


    int a; // declare a varaible <=> allocate memory for this variable
    a = 100;
    // print_func(a);
    cout << a << endl;

    int b;
    b = 200;
    b = a; // the value of b is the value of a

    // pass the address of a to another variable c
    int *c; // declare a pointer variable named c
    // a pointer: the value of this pointer is the address of another variable 
    c = &a; // assign the addres of a, &a, to the value of c, c.
    // the value that the pointer pointed to
    cout << endl << "*c is " << *c << endl;
    *c = 500;
    cout << endl << "*c is " << *c << endl;
}