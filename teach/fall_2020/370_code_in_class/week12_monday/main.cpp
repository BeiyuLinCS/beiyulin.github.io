#include "myfunctions.h"




int main()
{
    
    char char_var;
    char_var = 'a';
    cout << char_var << endl;

    // array character;
    char char_array[100];
    char_array[0] = 'h';
    char_array[1] = 'a';
    char_array[2] = 'p';
    char_array[3] = 'p';
    char_array[4] = 'y';
    char_array[5] = '\0';
    cout << char_array << endl;
    // call function: do not include any type;
    len_count(char_array);

    string str_variable;

    str_variable = "today is monday Nov. 9th";
    cout << str_variable << endl;

    cout << "the length of the string is " << str_variable.length() << endl;
    str_variable.append(", 2020");
    cout << "the new string is " << str_variable << endl;

    cout << "the starting index of the Nov is " << str_variable.find("Nov") << endl;

    cout << "the substring starting with the index 5 and has a length 2: " << str_variable.substr(6, 2) << endl;

// 0123456789
// today is monday Nov.9th
}
