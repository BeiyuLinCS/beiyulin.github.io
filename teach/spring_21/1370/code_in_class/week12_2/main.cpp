#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
// we define a class called Employee
// there are three parts in this class
class Employee
{
public:
    string name;
    int id;
    int kpi; // think it as declar / define a variable
};

// declare a funcation
void assign_func(int *k, Employee ea[]);
// define a function
void assign_func(int &k, Employee ea[])
{
    // read in data from file
    // 1. declare a file variable by input file stream type
    ifstream fin;
    // 2. open the file
    fin.open("data.txt");
    // 3. do whatever we want
    string line;

    while (getline(fin, line))
    {

        // cout << line << endl;
        stringstream ss(line); // conver the types

        // float(3);
        string temp; // temporary
        // string id;
        // string kpi;

        // getline(cin, name);
        // getline(fin, name);
        getline(ss, temp, ' ');
        ea[k].name = temp;

        getline(ss, temp, ' ');
        ea[k].id = stoi(temp); // stoi: string to integer

        getline(ss, temp, ' ');
        ea[k].kpi = stoi(temp); // stoi: string to integer

        k++;
    }

    // 4. close the file
    fin.close();
}

int main()
{
    Employee e[100];
    // call a function
    int k; // local variable
    k = 0;
    // please review the materials about: pass by value, pass by reference, return types of a function
    assign_func(k, e);
    cout << endl
         << "the new k value is " << k << endl;
    cout << "the values of array based object is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << e[i].name << ", " << e[i].id << ", " << e[i].kpi << ", " << endl;
    }

    return 0;
}
