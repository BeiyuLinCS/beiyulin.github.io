// the header file of the c++ program. 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int LENGTHS = 10;

class employee{
    public: 
        string name;
        string position;
        int kpi;
};

// arrays pass by references <=> the value of each element will be updated. 
void read_from_file(string filename, employee employee_data[]);