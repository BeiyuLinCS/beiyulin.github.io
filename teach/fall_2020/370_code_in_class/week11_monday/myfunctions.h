// the header file of the c++ program. 
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
const int LENGTHS = 10;

class Employee{
    public: 
        string name;
        string position;
        int kpi;
        // nested class: inside of the class itself to initiliaze each variable. 
        Employee();
        Employee(string init_name, string init_position, int init_kpi);
};

Employee::Employee(){
    name = "brian";
    position = "student";
    kpi = 80;
}

Employee::Employee(string init_name, string init_position, int init_kpi){
    name = init_name;
    position = init_position;
    kpi = init_kpi;

}

// arrays pass by references <=> the value of each element will be updated.
void read_from_file(string filename, Employee employee_data[]);