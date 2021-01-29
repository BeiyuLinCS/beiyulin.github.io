#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // cin: read in data from the keyboard
    // cout: print out to the terminal
    // variables: int, double, char, string
    // 1. declare a varaible: data_type variable_name;
    // 2. assign values to the variable. 

    int num;
    num = 19;
    if (0)
    {
        cout << num << endl;
        cout << "test case" << endl;
    }

    cin >> num;
    cout << endl;
    cout << num << endl;

    // variable type (1 or 0; true or false): boolen type
    // if condition 
    // structure of the if condition 
    // if (condtion) {statements;}

    // declare a boolean type variable
    bool b;
    b = true; //  true or false is for human to read
    cout << b << endl; // for computer, it stores as 0 or 1.

    // structure of the if condition
    // if (condtion) {statements;}
    // 1. for the condition, as long as it's NOT zero (to human:false),
    // the computer think it is true.
    // 2. condition can be a variable (e.g., interger variable)
    // 3. condition can arithmetic statement/logical expression/
    // logical expression: < , > , ==, <=, >=, != ( 3 != 4 <=> true; 4!=4 <=> false), ! (not; only for one side)
    // = <=> assigning RHS to the LHS
    // num = 19 <=> Assigning the RHS 19 to the LHS num <=> the value of num is 19.
    // == <=> logical expression <=> Compare the LHS with the RHS <=> get two values: 1 or 0.

    // ASCII value <=> 'a' (for human to read), for computer, it stores the ASCII value for 'a' <=> 97.

    // character: letter, digit, special signs. 

    // "today" < "today1"
    // compare letter by letter (char by char)

    // example from the sldies
    int score;
    score = 50;
    char grade;
    
    if (score >= 60) {
        grade = 'P';
    }
    cout << "the grade is: "<< grade << endl;

    // an example of calcuating the absollute value:
    // outline: 1. reading a data from the keyboard
    // 2. if the data positive (<=> compare data with 0): do not do anything
    // 3. if the data negative, the absolute value of this negative is by assigning a negative sign to it. 

    int number, temp;
    cout << "the example of calcuating the absolute value of a keyboard reading number" << endl;
    cout << "please enter an integer" << endl;
    cin >> number;

    // very common way to use a temporary. 
    // we use the temp variable to store the Current value of the number
    temp = number; 

    if (number < 0) {
        number = -number;
    }
    else {
        cout << "this reading data is positive" << endl;
    }

    cout << "the absolute value of the reading data " << temp << " is " << number << endl;


    // real life case:
    // if sunny, I want to bring a pair of sun glasses with me
    // if not sunny, I would bring an umberalle with me. 
    // question: how to convert this in coding.
    // if .. else condition
    // structure:
    // if (condition) {statements;}
    // else {statements;}

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;


    int temp_num;

    temp_num = 10;
    if (temp_num > 100) {
        // the statements will run only when the condition is TRUE.
        cout << "temp_num is greater than 100" << endl;
        cout << "happy Thursday!" << endl;
    }
    else {
        // these statements will run only when the condition is FALSE.
        cout << "temp_num is NOT greater than 100" << endl;
        cout << "look forward to the next week" << endl;

    }

    cout << floor((100.01 - floor(100.01))*100)<< endl;










}
