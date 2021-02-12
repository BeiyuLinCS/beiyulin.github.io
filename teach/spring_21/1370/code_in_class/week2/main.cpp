#include <iostream>
using namespace std;
#include <cmath>


int main()
{
    // for 
    // nested for loop
    // power function
    // given a number, we want to multiple this number by itself for m (the number of power) times 

    int num, power;
    int result;
    result = 1;

    // cout << "please enter an integer as a number ";
    // cin  >> num;
    // cout << "please enter an integer as a power ";
    // cin >> power;

    // given a number 4 and the power is 3
    // that means: 4^3 = 4*4*4 = 64;
    // do a loop for 3 times
    // we need a counter / index variable, i, that let the loop run for three times
    // then stop
    // inside of the loop, we just the multiplication. 


    // a counter variable that counter/index 3 times 
    // for(int i=0; i<power; i++)
    // {
    //     result = result*num;
    // }
    // cout << "the power " << power << " of the number " << num << " is " << result << endl;


    // while 
    // for 
    // do while loop 

    int j = 3;
    while (j < 3){
        cout << "while loop example" << endl;
        j++;
    }

    // cout << endl;
    // cout << endl;
    // cout << endl;

    // int m = 3; 
    // do 
    // {
    //     cout << "do while loop example" << endl;
    //     m++;
    // }while(m<3);


    // while(1){
    //     cout << "1 forever" << endl;
    //     break;
    // }

    int n=0;
    int sum = 0;
    // continuously read in a number from the keyboard
    // if the number is -99, stop and get sum
    // other wise, continue read in data 

    // while(1)
    // {
    //     cout << "please input a number" << endl;
    //     cin >> n;
    //     if (n == -99){
    //         break;
    //     }
    //     else{
    //         sum += n; // sum = sum + n; 
    //     }
    // }

    // cout << "the sum is " << sum << endl;

    string str;
    // cout << "please input a string" << endl;
    // cin >> str;
    // cout << "the str is " << str << endl;

    // getline
    cout << "please input a string" << endl;
    cin.ignore(5, '\n'); // '\n' <=> endl; '' <=>char; "" <=> string;
    getline(cin, str);
    cout << str << endl;

    // today is a good day
    // 0123456789

    


}
