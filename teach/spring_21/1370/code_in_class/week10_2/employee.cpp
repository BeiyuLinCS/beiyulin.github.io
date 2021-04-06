#include "employee.h"

// 2. define a function
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
