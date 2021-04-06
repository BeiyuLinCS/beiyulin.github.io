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