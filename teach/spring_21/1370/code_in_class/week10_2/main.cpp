#include <iostream>
#include <cmath>
#include <string>
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
    Point p1; // p1 is an object of the class Point
    // assgin (1,1) to the x, y value of p1
    p1.x = 1.0;
    p1.y = 1.0;

    Point p[100];
    // assgin (1,2) to the second element of p
    p[1].x = 1.0;
    p[1].y = 2.0;

    for(int i = 0; i < 10; i++){
        if (i == 4){
            cout << endl << "please input the x, y value for the 5th point" << endl;
            cin >> p[i].x;
            cin >> p[i].y;
        }else{
            p[i].x = i+ 1;
            p[i].y = i + 1.5;
        }   
    }

    // print out all the points 
    for (int j = 0; j < 10; j++){
        cout << p[j].x << ", " << p[j].y << endl;
    }

    
    
    // pre-defined type variable_name
    int num;
    // declare a special variable with structure data
    Employee e1; // e1 is an object;
    e1.name = "Mary";
    cin >> e1.id;
    e1.kpi = 8;

    Employee e2, e3, e4, e5; 

    Employee e[5]; // arrays of object
    e[0].name = "Mary";
    e[0].id = 1111;
    e[0].kpi = 9;

    string names[5]; // parallel arrays
    int IDs[5];
    int kpi[5];


    return 0;
}



