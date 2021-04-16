#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// declare / define a class;
// user-defined class Point
class Point
{
    public:
        int x; // x and y are variable <=> members
        int y;
        // declare a function <=> method
        void print_func(int x_temp, int y_temp); // parameters
        // constructor <=> initiliazation
        Point(int x_init, int y_init);
};

class BankAccount{
    public:    
        int account_number;
        double balance;
        // declare a constructor (function);
        BankAccount(int account_init, double balance_init);
        // declare a method (function);
        bool print_func();
};

// define a function that belongs to a class
void Point::print_func(int x_temp, int y_temp)
{
    int temp; // local variable
    cout << endl
         << "please enter an integer" << endl;
    cin >> temp;
    cout << endl
         << x + temp + x_temp << ", " << y + temp + y_temp << endl;
}

// class_name::constructor_name
Point::Point(int x_init, int y_init)
{
    x = x_init;
    y = y_init;
}

BankAccount::BankAccount(int account_init, double balance_init){
    account_number = account_init;
    balance = balance_init;
}

// tell the computer the scope that this function belongs to
bool BankAccount::print_func(){
    int temp;
    cout << "please input an integer" << endl; 
    cin >> temp;

    if (temp > 0){
        cout << "the account number is " << account_number << " with the balance " << balance << endl;
        return true;
    }
    else{
        return false;
    }
}




int main()
{   
    // declare an object;
    BankAccount account1(98392, 5.32);
    BankAccount account4(983112, 12315.32);
    account1.print_func();

    // string class: pre-defined class in the library
    // length, find, substr, append all are functinos in this string class
    string s;
    s = "today";
    cout << s.length()<< endl; // length is a function in the string class

    Point p(100, 200); // p: object
    // p.x = 2; // x is member
    // p.y = 1; 
    int a, b;
    a = 20;
    b = 30;
    p.print_func(a, b); // passing by value

    // can we also do the function inside of the user-defined class, Point? 
    // 1. declare a function inside of a user-define class
    // 2. define a function 
    // 3. how to use it based on an object (call a function)


    
    
}