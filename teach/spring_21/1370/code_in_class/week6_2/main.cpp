#include <iostream>
#include <cmath>
#include <string>
using namespace std;
#define NDEBUG
#include <cassert>

enum classLevel{FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};
enum gradeClass{A,B,C,D};

int main()
{

    int num; 
    num = 1;

    // switch is a combination of (if else if else) and (if if if )
    switch(num)
    {   // compare if num == 1
        case 1:
            cout << "inside of the case 1" << endl;
            break;
        // compare if num == 2
        case 2:
            cout << "inside of the case 2" << endl;
            break;
        default:
            cout << "not inside of case 1, nor case 2" << endl;

    }


    classLevel student1;
    student1 = FRESHMAN;

    switch(student1){
        // compare if the studnet1 == FRESHMAN
        case FRESHMAN:
            cout << "this student is a freshman" << endl;
            break;
        case SOPHOMORE:
            cout << "this student is a sophomore" << endl;
            break;
        case JUNIOR:
            cout << "this student is a JUNIOR" << endl;
            break;
        default:
            cout << "not freshman, sophomore, nor junior" << endl;
            break;

        }
    

    int num1 = 0;
    
    assert(num1 != 0);  
    // cout << 2.0/num1 << endl;
    cout << "num1 is not equal to 0" << endl;
    num1 += 10; // num1 = num1 + 10; 
    num1 -= 5;
    num1 = num1 + 100;
    cout << "the updated num1 value is " << num1 << endl;
    if (1)
    {
        cout << "in side of if condition";
    }
    

    return 0;
}



