#include "myfunctions.h"


// define a function
void print_out_array(string name_array[], string position_array[], int kpi_array[], int len_array){
    cout << "the readin names are " << endl;
    for (int j = 0; j < len_array; j++)
    {
        cout << name_array[j] << " " << position_array[j] << " " << kpi_array[j] << endl;
    }
}


int main()
{   // type variable_name;
    // int int_variable;
    ifstream fin;
    string names[LENGTHS];
    string positions[LENGTHS];
    int kpi[LENGTHS];

    // open a file
    fin.open("data.txt");

    // readin data from file. 
    int i = 0; 

    while(!fin.eof())
    {
        if (i < LENGTHS){
            fin >> names[i];
            fin >> positions[i];
            fin >> kpi[i];
            i++;
        }else{
            cout << "not good. something wrong." << endl;
            return -1; // you donot need to know this since we will talk about it later. 
        }

    }
    // close a file
    fin.close();

    // call a function
    print_out_array(names, positions, kpi, i);

    string input_name; 
    cout << endl;
    cout << "please input a name that you are looking for the information" << endl;
    cin >> input_name; 

    for(int k = 0; k < i; k++){
        if (names[k] == input_name){
            cout << endl;
            cout << "Yeah, we find the name" << endl;
            cout << names[k] << " " << positions[k] << " " << kpi[k] << endl;
            break;
        }

    }


}