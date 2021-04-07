#include <iostream>
#include <cmath>
#include <string>
#include <fstream>
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

class Point
{
    public:
        double x;
        double y;
};

// 1. declare a function
void sum_func(int s, int num[], int l, Point p[]);
void assign_value_func(int l, Point p[]);
void search_name(int n_e, Employee e[]);
void high_kpi(int n_e, Employee e[]);


void high_kpi(int n_e, Employee e[])
{
    int largest;
    largest = -10000000;

    for (int i = 0; i < n_e; i++)
    {
        if (e[i].kpi > largest)
        {
            largest = e[i].kpi;
        }
    }
    cout << endl << "the large kpi value is " << largest << endl;
}

void search_name(int n_e, Employee e[])
{
    string name;
    cout << endl
         << "Please input the name that you want to search " << endl;
    cin >> name;
    bool flag;
    flag = false;

    for (int i = 0; i < n_e; i++)
    {
        if (name == e[i].name)
        {
            cout << endl
                 << e[i].name << ", " << e[i].id << ", " << e[i].kpi << endl;
            flag = true;
        }
    }

    if (!flag)
    {
        cout << endl
             << "the given name does not exist in the current data." << endl;
    }
}

void assign_value_func(int l, Point p[])
{

    for (int i = 0; i < l; i++)
    {
        if (i == 4)
        {
            cout << endl
                 << "please input the x, y value for the 5th point" << endl;
            cin >> p[i].x;
            cin >> p[i].y;
        }
        else
        {
            p[i].x = i + 1;
            p[i].y = i + 1.5;
        }
    }
}

void sum_func(int s, int num[], int l, Point p[])
{
    // cacluate the sum of each element in an array
    int sum_res;
    sum_res = 0;

    for (int i = 0; i < s; i++)
    {
        sum_res += num[i]; // sum_res = sum_res + num[i];
    }
    cout << endl
         << "the sum of each element in the array is " << sum_res << endl;

    // the average values of x, y given all the 10 points.
    double sum_x, sum_y;
    for (int j = 0; j < l; j++)
    {
        sum_x += p[j].x;
        sum_y += p[j].y;
    }
    cout << "the average values of x, y given the 10 points are " << sum_x / 1.0 / l << ", " << sum_y / 1.0 / l << endl;
}


int main()
{
    // 3. call a function
    int num1[3];
    int s = 3;
    num1[0] = 1;
    num1[1] = 10;
    num1[2] = 20;

    // sum_func(s, num1);

    Point p1; // p1 is an object of the class Point
    // assgin (1,1) to the x, y value of p1
    // p1.x = 1.0;
    // p1.y = 1.0;

    Point p[10];// length is 100 and the index is from 0 to 99. 
    // assgin (1,2) to the second element of p
    // p[1].x = 1.0;
    // p[1].y = 2.0;

    int l = 10;
    assign_value_func(l, p);
    sum_func(s, num1, l, p);

    // print out all the points
    // for (int j = 0; j < 10; j++){
    //     cout << p[j].x << ", " << p[j].y << endl;
    // }

    // pre-defined type variable_name
    int num;
    // declare a special variable with structure data
    Employee e1; // e1 is an object;
    e1.name = "Mary";
    e1.id = 1111;
    e1.kpi = 8;

    Employee e2, e3, e4, e5; 

    Employee e[3]; // arrays of object
    e[0].name = "Mary";
    e[0].id = 1111;
    e[0].kpi = 8;

    e[1].name = "Bill";
    e[1].id = 1123;
    e[1].kpi = 10;

    e[2].name = "Tuesday";
    e[2].id = 1213;
    e[2].kpi = 9;

    // write a function to search an employee by name
    // if the employee exist in the data, print out all the information
    search_name(3, e);
    high_kpi(3, e);

    string names[5]; // parallel arrays
    int IDs[5];
    int kpi[5];


    return 0;
}



