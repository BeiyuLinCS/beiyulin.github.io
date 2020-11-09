// the header file of the c++ program. 
#include <iostream>
#include <string>
#include <fstream> 
using namespace std;


// declare a function;
void len_count(char a[]);

// define a function;
void len_count(char a[]){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }

    // the reason to do the i++ at the cout is to add/count the '\0' into the length
    cout << i << endl;
}
