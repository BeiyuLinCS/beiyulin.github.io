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


int main()
{
    // 3. call a function
    int num1[3];
    int s = 3;
    num1[0] = 1;
    num1[1] = 10;
    num1[2] = 20;


    Point p1; // p1 is an object of the class Point
    // assgin (1,1) to the x, y value of p1
    p1.x = 1.0;
    p1.y = 1.0;

    Point p[10];// length is 100 and the index is from 0 to 99. 
    // assgin (1,2) to the second element of p
    p[1].x = 1.0;
    p[1].y = 2.0;

    

    print out all the points
    for (int j = 0; j < 10; j++){
        cout << p[j].x << ", " << p[j].y << endl;
    }

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


    string names[5]; // parallel arrays
    int IDs[5];
    int kpi[5];


    return 0;
}



