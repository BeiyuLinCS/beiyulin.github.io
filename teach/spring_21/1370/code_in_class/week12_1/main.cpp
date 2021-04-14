#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
// delcare a function
int find_length(char c[]);

// define a function
int find_length(char c[])
{

    int l = 0;
    while(c[l] != '\0'){
        l++;
    }
    return l;
}

int main()
{   // string variable
    string s; 
    s = "today";
    cout << endl << "the length of the string variable is " << endl;
    cout << s.length()<< endl;
    string s2;
    s2 = s;
    cout << endl << "the s2 is " << s2 << endl;
    s2 = "this semester is almost over, haha, we will have fun in summer, it's super hot.";
    s2.append(" we look forward to the cool weather in fall 2021, yeah.");
    
    // 1. find this string in the entire string
    // 2. return the index of the first element;
    cout << endl << "the index is " << endl;
    cout << s2.find("semester"); 
    cout << endl << "given the index from 5, the substr is " << endl;
    // 5 is the starting index, 13 the total length of the substr starting with letter in the index 5. 
    cout << s2.substr(5, 13) << endl;
    cout << endl<< s2 << endl;

    // character array 
    char c[100];
    c[0] = 'T';
    c[1] = 'o';
    c[2] = 'd';
    c[3] = 'a';
    c[4] = 'y';
    c[5] = '\0';
    // call a function
    cout << endl << "the lenght that are used in the character array is " << endl;
    int length_c;
    length_c = find_length(c);

    char c1[100];
    for(int i = 0; i < length_c; i++){
        c1[i] = c[i];
    }
    c1[length_c] = '\0';
    
    
}