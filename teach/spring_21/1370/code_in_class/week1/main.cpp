#include <iostream>
using namespace std;

int main()
{
    // an example for the insert opertor <<
    // cout: print things out on the terminal / console
    // endl: start a new line
    // one statment => compile first (to check if there is any error) => run => results
    cout << 23+4 << endl;
    cout << 5-6*20 << endl;
    cout << 56.882 - (34/23) << endl;
    cout << 3*7-6+2*5/4+6 << endl;
    cout << 17.0/4 << endl;

    // anytime when we did the change, please save first. 
    // otherwise, it only compiles the things before the change. 

    // define variables
    int a, b, c, d; 
    a = 3;
    b = 4;
    c = (a%b) *6;
    d = c/b;

    cout << endl;
    cout << "the value of c " << c << endl;
    cout << "the value of d " << d << endl;

}
