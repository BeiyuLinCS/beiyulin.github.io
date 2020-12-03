#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Product
{
public:
    string description;
    int inventory_no;
    double price;
};

int main()
{
    // pointer is a stack variable, doesn't point at anything yet
    Product *inv = 0;

    // can allocate heap space for one object
    inv = new Product;
    inv->description = "my little pony";
    // and clean up
    delete inv; // de-allocate the memory

    // or for multiple objects
    inv = new Product[2052];
    inv[50].price = 5.6;
    // and clean up (slightly different syntax)
    delete[] inv;


    return 0;
}
