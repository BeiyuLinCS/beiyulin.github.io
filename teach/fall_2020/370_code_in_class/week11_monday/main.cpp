#include "myfunctions.h"
void init(Employee e);
// user-defined function: 
//1. declare a function (outside of the main function; or in the *.h);
//2. define a function (outside of the main function); 
//3. call a function (inside of main function)

// void init(Employee e)
// {
//     e.name = "";
//     e.position = "";
//     e.kpi = 0;
// }

void read_from_file(string filename, Employee employee_data[]){
    ifstream fin;
    // int int_variable;

    fin.open(filename);

    int i = 0;
    while (!fin.eof())
    {
        fin >> employee_data[i].name;
        fin >> employee_data[i].position;
        fin >> employee_data[i].kpi;
        i++;
    }
}

int main()
{
    Employee employee_var;
    cout << "the initialized value of the variable" << endl;
    cout << employee_var.name << " " << employee_var.position << " " << employee_var.kpi << endl;

    cout << endl;
    Employee employee_var1("Mark", "student", 85);
    cout << "the initialized value of the variable" << endl;
    cout << employee_var1.name << " " << employee_var1.position << " " << employee_var1.kpi << endl;

    // Employee employee_data;
    // employee_data.name = "Mark";
    // employee_data.position = "student";
    // employee_data.kpi = 85;

    Employee employee_data[6];
    Employee employee_data2[5];
    // int int_variable[10];

    // for (int i = 0; i < 6; i++)
    // {
    //     init(employee_data[i]);
    // }


    // the steps to read in data from a file
    // 1. open a file
    // 2. do whatever we want. 
    // 3. must close a file 

    read_from_file("google_employee.txt", employee_data);
    // read_from_file("apple_employee.txt", employee_data2);

    for(int i = 0; i< 4; i++){
        cout << employee_data[i].name << " " << employee_data[i].position << " " << employee_data[i].kpi << " " << endl;
    }

    // assgin values to the first element of an array
    // employee_data[0].name = "adam";
    // employee_data[0].position = "manager";
    // employee_data[0].kpi = 90;

    // // // assgin values to the 2nd element of an array
    // // employee_data[1].name = "joe";
    // // employee_data[1].position = "manager";
    // // employee_data[1].kpi = 100;

    // for(int i = 0; i < 10; i++){
    //     employee_data[i].name = "joe";
    //     employee_data[i].position = "manager";
    //     employee_data[i].kpi = 100;
    // }
}