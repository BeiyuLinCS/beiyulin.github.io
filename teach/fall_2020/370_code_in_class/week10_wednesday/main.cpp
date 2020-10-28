#include "myfunctions.h"
void init(employee e);
// user-defined function: 
//1. declare a function (outside of the main function; or in the *.h);
//2. define a function (outside of the main function); 
//3. call a function (inside of main function)

void init(employee e)
{
    e.name = "";
    e.position = "";
    e.kpi = 0;
}

void read_from_file(string filename, employee employee_data[]){
    ifstream fin;
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

    employee employee_data[6];
    employee employee_data2[5];
    for (int i = 0; i < 6; i++)
    {
        init(employee_data[i]);
    }


    read_from_file("google_employee.txt", employee_data);
    read_from_file("apple_employee.txt", employee_data2);

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