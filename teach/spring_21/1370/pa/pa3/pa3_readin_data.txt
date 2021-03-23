#include "myfunctions.h"

void read_from_file(string filename)
{
    ifstream fin;
    // int int_variable;

    fin.open(filename);

    string str2;
    string str1;

    while (fin >> str1 >> str2){
        cout << str1 << " " << str2  << endl;

    }

}

int main()
{
    read_from_file("grades.txt");
}