#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // loop for the iterative calculation.
    // while loop
    // 1. initialize a counter variable
    // 2. condition part of while loop: define the condition with the counter variable
    // 3. inside of the while loop: {statement1;statement2;}
    // 4. inside of the while loop, in general, we use the last statement to 
    // update the counter variable. 

    // declare a variable
    int i; // allocate some memory in the computer for this variable 
    i = 0; 

    while (i < 5) {
        cout << i << " "; 
        i++; // i--;
    }
    cout << endl; 

    // for loop 
    
    for (int j=4; j > -1; j--)    
    {
        cout << j << " ";
    }
    cout << endl;

    // nested if condition
    int j = 0;
    if (i == 5){
        if (j == 0)
        {cout << "i is " << i << " and j is " << j << endl;}
    }

    // nested for 
    int m,n;
    for(m=1; m <6; m++)
    {
        // when m =1, 
        // the second for loop: (n=1;n<=1; n++) <=> print out 1 star

        // when m =2, how print out 2 star
        // the second for loop: (n=1; n<=2; n++) <=> print out 2 star

        // when m = 5,
        // the second for loop: (n=1; n<=5; n++)
        // n values are: 1,2,3,4,5

        for(n=1; n<=m; n++)
        {
            cout << "**";
        }
        cout << endl;
    
    }

    for (m = 5; m > -1; m--)
    {
        // when m = 5,
        // the second for loop (n = 1; n <= 5; n++)
        // <=> the value of n would be: 1,2,3,4,5 
        // <=> the second loop will run 5 times 
        // <=> 10; start a new line

        // when m = 4,
        // the second for loop (n = 1; n <= 4; n++)
        // the values of n are: 1,2,3,4
        // <=> the second loop will run 4 times
        // <=> 8 starts; start a new line

        // when m = 3,
        // the second for loop (n = 1; n <= 3; n++)
        // the values of n are: 1,2,3
        // <=> the second loop run 3 times
        // <=> 6 starts; start a new line

        // when m = 0
        // the second for loop (n = 1; n <= 0; n++)
        // never run the second loop
        // but we will have one more empty line

        for (n = 1; n <= m; n++)
        {
            cout << "**";
        }
        cout << endl;
    }
}
