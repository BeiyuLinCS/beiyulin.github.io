// the header file of the c++ program. 
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
const int LENGTHS = 10;

// declare a function;
// void array_func(int array_variable[], int length_array);
void print_out_array(string name_array[], string position_array[], int kpi_array[], int len_array);

// define a function
void print_out_array(string name_array[], string position_array[], int kpi_array[], int len_array)
{
    cout << "the readin names are " << endl;
    for (int j = 0; j < len_array; j++)
    {
        cout << name_array[j] << " " << position_array[j] << " " << kpi_array[j] << endl;
    }
}

// class definition (blueprint)
class employee
{
public:
    // data members
    string name;
    string position;
    int scores[100]; // note array inside class
};
