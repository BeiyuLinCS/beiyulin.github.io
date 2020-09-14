#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int number;
    // in general, when we define a boolean varaible,
    // we ususally use it as a flag. 
    bool flag; // boolean: true or false
    flag = true; //assign the initial value to the variable

    /****************************************************************/
    /********** the condition of 'if' is a value directly **********/
    // 1. in computer system, if we give a value to the condition of the if statement, 
    // the value true: not 0
    // 2. if () does not finish with ;
    // 3. if there are multiple "if", the system will check each 'if'
    // and will execute the statements in each 'if' if the condition is true. 
    if ("dog")
        cout << "Today is Wednesday" << endl;
    if (2)
        cout << "the sum is: " << 3+5 << endl;

    /****************************************************************/
    /********** the condition of 'if' can be variable      **********/
    // the condition of the 'if' statement can be a boolean variable
    if (flag)
        cout << "Today is Thursday" << endl;

    // the type of variable for the condition in the 'if' statement
    // can be int (example is listed), string, char, float, boolean(example is listed)
    int interger;
    interger = 5;
    if (interger)
        cout << "interger is : " << interger << endl;

    // note: in general, when give the name of a variable
    // one single lettter as a variable may confuse others while the code is getting long. 
    char E; // legal and it would work, just it may not reader friendly. 
    E = 'f'; // when given an integer to a char type, it may only read in the last digit. 
    // note: when cin from the terminal for char variable with integer value: it only read in the first digit
    // while assign a integer to a char variblae, it only read in the last digit. 
    if (E)
        cout << "the char is : " << E << endl;

    /****** TODO try the other two types (string, float) of variables ******/

    /*********************************************************************************/
    /********** the condition of 'if' can be logic or arithmetic expression **********/
    // logic expression: equal, <, <=, >, >=, not equal
    // logic expression: == , <, <=, >, >=, !=
    // equal to (==) because = means assign a value to a variable
    // E = 'f' here = mean assign the letter 'f' to varaible E
    // interger == 35: give us a false
    // for 'if' condition is false, the system will not execute the statment. 
    if (interger != 35)
        cout << endl;
        cout << "logic expression for if condition" << endl;
    // two integer divide => only an integer
    // 86/90 => 0 (IT IS ZERO!!)
    /****** TODO please review the promote list of data type change/convert ******/
    /****** TODO on the page 20 the slide of the second week / Monday ******/

    // for division, if any part is not integer, the result will not be an interger
    // 86/90.0 => 0.9 (NOT 0)

    if (86/90.0)
        cout << "arithmetic expression for if condition" << endl;
    
    // a warning message for the below case
    // if (86/0)
    //     cout << "arithmetic expression for if condition: " << 86/0 << endl;

    // logical expression for char variables
    char char_var1, char_var2;
    char_var1 = 'x';
    char_var2 = '<';
    // the system will find the ASCII value char_var1 and char_var2
    // then compare the ASCII value to get true / false 
    if (char_var1 < char_var2)
        cout << "char_var1 < char_var1" << endl;

    // logical expression for two strings
    // case 1. same string length: the first several letters are same but the rest are not
    // "today" "todai"
    string string_var1;
    string string_var2;

    string_var1 = "today";
    string_var2 = "todai";
    // <: compare the first letter that are different
    // 'y' < 'i'
    // ASCII value for letter increasing order:
    // a b c: 97 98 99
    if (string_var1 < string_var2)
        cout << "two strings are equal" << endl;

    // case 2. different string length: the first several letters are same but the rest are not
    string string_var3;
    string string_var4;

    string_var3 = "today";
    string_var4 = "todaidfads";
    // TODO for Dr. Lin: string length does not matter but only the last character of the string 
    // TODO for me: HW1 assignment and then email to all. 
    // that is used to compare. 
    if (string_var3 > string_var4)
        cout << "string_var3 less than string_var4" << endl;
    
    float test = 2.34531;
    test = round(test);
    cout << "test value is: "<< test << endl;
    
    the structure of the if-condtion
    if (condition)
       one statement

    use {} right after the condtion, which works for the "if", "while", "for"
    also works for functions we define;
    please notice the difference between if if and if else
    if (3 == 5){
        cout << "lets eat bacon today" << endl;
        cout << "lets eat egg tomorrow" << endl;
        cout << "Let's eat pancakes for dinner" << endl;
    }
    else
    {
        cout << "lets eat banana today" << endl;
        cout << "lets eat apple tomorrow" << endl;
        cout << "Let's eat waffles for dinner" << endl;
    }


    int integer_var = 3;
    if (integer_var == 1) 
    {
        cout << "inside of if " << endl;
    }
    else if (integer_var == 3)
    {
        cout << "inside of the first else if " << integer_var << endl;
    }
    else if (integer_var == 3)
    {
        cout << "inside of the second self if" << integer_var << endl;
    }
    else{
        cout << "the value of the integer is not one of those conditions" << endl;
    }

    /******** example of while loop  ********/
    /******** print out a sentence for 6 times  ********/
    // the structure of 'if' condition is:
    // if(condtion){statements;}

    // the structure of 'while' loop is:
    // while(condition){statments;}

    // in general, we use 'i' as an index. 
    int i; // allocate the memory for variable name i. 
    i = 0; // in general, in computer science, we start the number with 0. 

    while(i<6)
    {
       
        cout << "iteration number: " << i+1 << endl;
        i++; // i  =  i + 1; i can be updated by + 1, + 2, + 3, or whatever value we want to update.
        // while updating, 1,2,3,4 are called steps. 
        // if we do not update the value of i, the while loop will go to infinite loop
    }

    cout << "jump out of the loop" << endl;

    // exampel for the while loop slides on page 7. 
    // line 164: i = 0, i = 0 < 6, do the statements in side of the parethesis:
    // line 166: cout << "" << 1 << endl;
    // line 167: i++; i = i + 1 = 0 + 1 => the updated i value is 1;

    // line 164: i = 1, i = 1 < 6, do the statements in side of the parethesis:
    // line 166: cout << "" << 1+1 = 2 << endl;
    // line 167: i++; i = i + 1 = 1 + 1 => the updated i value is 2;

    // line 164: i = 2, i = 2 < 6, do the statements in side of the parethesis:
    // line 166: cout << "" << 2+1 = 3 << endl;
    // line 167: i++; i = i + 1 = 2 + 1 => the updated i value is 3;

    // line 164: i = 3, i = 3 < 6, do the statements in side of the parethesis:
    // line 166: cout << "" << 3 +1 =  << endl;
    // line 167: i++; i = i + 1 =  3 + 1 => the updated i value is 4;

    // line 164: i = 4, i = 4 < 6, do the statements in side of the parethesis:
    // line 166: cout << "" << 4 +1 =  << endl;
    // line 167: i++; i = i + 1 =  4 + 1 => the updated i value is 5;

    // line 164: i = 5, i = 5 < 6, do the statements in side of the parethesis:
    // line 166: cout << "" << 5 +1 =  << endl;
    // line 167: i++; i = i + 1 =  5 + 1 => the updated i value is 6;

    // now the i value is 6 and go back to the line 164: 
    // the condition: 6 < 6 is false
    // once the condtion in the while loop is false, the system jumps out of the while loop immediately. 

    int index_i = 0 , index_j = 0;

    while (index_i < 5){
        index_j = index_j + 10;
        cout << "the value of updated index_j is " << index_j <<endl;
        index_i++;
    }
    cout << "we are out of the while loop and now the index_j value is " << index_j << endl;


    i = 0;

    cout << "here is the results of example a on the slide page number 12" << endl;
    while (i<5)
    {
        cout << i << endl;
        i++;
    }

    cout << "here is the results of example b on the slide page number 12" << endl;
    
    i = 0; // re-initialize the i value
    while (i < 5)
    {
        i++;
        cout << i << endl;
    }

    // example of slide 14 for the topic of while loop. 
    int input_var;
    int results;
    cout << "the example of the while loop" << endl;
    cout << "please input integers to get the sum of them" << endl;
    cin >> input_var;
    results = 0;

    while (input_var != -99)
    {
        results = results + input_var;
        cin >> input_var;
    }
    cout << "the sum is " << results << endl;


    cout << "" << endl;
    cout << "" << endl;
    cout << "the example of do while loop" << endl;
    cout << "please input integers to get the sum of them" << endl;
    cin >> input_var;
    results = 0;
    do
    {   results = results + input_var;
        cin >> input_var;
    } while (input_var != -99);
    cout << "the sum is " << results << endl;
}




