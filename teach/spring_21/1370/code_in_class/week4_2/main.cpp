#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // multiple if conditions: 
    // we check all the condition and run the statements whenever the condition is true. 
    if (0<2)
    {cout << "0<2" << endl;}
    if (0 < 3)
    {cout << "0<3" << endl;}
    if (0 < 5)
    {cout << "0<5" << endl;}

    // if else: either this one or the other one. 
    if (0<2)
    { cout << "0<2" << endl;}
    else
    { cout<< "0 not less than 2" << endl;}


    // if else if else if .... else:
    // if (sunny) {a pair of sunglasses}
    // else if (cloudy) {bring a jacket}
    // else if (raining) {bring an umbrella}
    // else {bike to school}

    int num;
    num = 2;
    if (num > 2) {cout << "num is greater than 2" << endl;}
    else if (num > 3)
    {cout << "num is greater than 3" << endl;}
    else if (num > 6)
    {cout << "num is greater than 6" << endl;}
    else{ cout << "hello, we are in the else condition." << endl;}

    // example of car insurance premium
    // practice if condition;
    // first, there should be several varaibles to store data
    // char gender
    // int age
    // int tickets;
    // double premium;
    //
    // if (gender == 'M' and age < 21){premium = ...}
    // if (gender == 'M' and age >= 21 and age <29){premium = ...}
    // if (gender == 'M' and age >= 29){premium = ...}
    // if (gender == 'F' and age > 21){premium = ...}
    // if (gender == 'F' and age <= 21){premium = ...}

    char gender;
    int age;
    int tickets;
    double premium;

    // cout << "please input the gender (M or F)" << endl;
    // cin >> gender;
    // cout << "please input the age (integer)" << endl;
    // cin >> age;
    // cout << "please input the number of tickets (integer)" << endl;
    // cin >> tickets;
    
    // 1. basic one that can run without any bug <=> bruce force solution
    // 2. optimize it in the term of time and space complexity. 

    // if (gender == 'M' && age < 21){
    //     premium = 1500 + 200 * tickets;
    // }
    // if (gender == 'M' && age >= 21 and age < 29)
    // {
    //     premium = 1200 + 100 * tickets;
    // }
    // if (gender == 'M' && age >= 29)
    // {
    //     premium = 1000 + 100 * tickets;
    // }

    // optional solution (we do not consider the time or space complexity)
    // nested if condition
    if (gender == 'M'){
        if (age < 21)
        {
            premium = 1500 + 200 * tickets;
        }
        else if (age <29 && age >=21) {
            premium = 1200 + 100 * tickets;
        }
        else {
            premium = 1000 + 100 * tickets;
        }
    }


    // if (gender == 'F' && age > 21)
    // {
    //     premium = 1000 + 100 * tickets;
    // }
    // if (gender == 'F' && age <= 21)
    // {
    //     premium = 1200 + 200 * tickets;
    // }

    // optional solution for the female driver
    if (gender == 'F'){
        if (age <= 21) {
            premium = 1200 + 200 * tickets;
        }
        else{
            premium = 1000 + 100 * tickets;
        }

    }

    if (gender == 'M'){
        if (age < 21)
        {
            premium = 1500 + 200 * tickets;
        }
        else if (age < 29 && age >= 21)
        {
            premium = 1200 + 100 * tickets;
        }
        else
        {
            premium = 1000 + 100 * tickets;
        }
    }
    else{
        if (age <= 21)
        {
            premium = 1200 + 200 * tickets;
        }
        else
        {
            premium = 1000 + 100 * tickets;
        }
    }

    cout << "the premium is: " << premium << endl;
    
    if (0<2) {cout << "0<2" << endl;} // block statements
    // if (condition) {statements;}
    // while (condition) {statements;}
    // dead loop or infinite loop
    // while (0<2) {cout << "0<2" << endl;}
    // regular while loop
    int initial_num = 0;
    while (initial_num < 2)
    {
        cout << "the test case for while loop" << endl;
        // 1 is called the step
        // initial_num = initial_num + 1; // must update the value.
        initial_num++;
    }
    // the structure of the regular while loop
    // initialize a variable (counter variable)
    // while (condition with the counter varaible)
    // { statements; 
    //  counter variable update;
    //}

    // initialize a variable
    int i = 0; 
    int sum = 0; 

    // while (condition related with the variable)
    while (i <= 20){
        cout << i << endl;
        sum = sum + i;
        // update the counter variable, i. 
        // 5 is called the step
        i = i + 5;     
        
    }
    cout << "the sum from 0 to 20 is " << sum << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // declare a variable to store the data read in from the keybaord
    // delcare a summation variable
    // read in data from keyboard (cin)
    // while loop
    // condition: check the value of the variable != -99
    // condition T: add the read in data to the sum variable
    // read in data from keyboard (cin) <=> update the value of the counter variable num. 
    // condition F: while loop ended
    // print out the sum results on the terminal

    num = 0;
    sum = 0; // sum = sum + num

    while (num != -99)
    {
        cout << "please input an integer for this program" << endl;
        sum = sum + num; //because the value of num is 0 which has no impact on the sum;
        cin >> num;      // have updating part at the last of the while loop.
    }

    cout << "the sum is " << sum << endl; 
}
