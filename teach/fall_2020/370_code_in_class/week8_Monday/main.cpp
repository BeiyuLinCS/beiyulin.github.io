#include <iostream>
#include <fstream>
#include <string>
// fstream includes both the output file stream and input file stream.
using namespace std;

// in any program/ project in c++ / c language, we must have one and ONLY one main function.
int main()
{
    /*****  example of iostream *****/
    cout << endl;

    /*****  example of fstream *****/
    /***** 1. declare a file variable (fout or fin) *****/
    ofstream fout; // read in the data from file, we use fin;

    /***** 2. ofstream: open a file with the file avariable name *****/
    //<=> if the file exists, overwrite the content in the file.
    //<=> if the file does not exist, create the file and write the stuff into the file.
    fout.open("outputfile_example2.txt", ios::app); // we will talk about the file path later.

    /***** 3. do whatever we want *****/
    // fout << "today is monday.\n";
    // for "cout", we use "endl", "\n" to start a new line. 
    int n = 0;
    while (n<5){
        fout << "today is Monday." <<endl;
        n++;
    }

    /***** 4. close a file *****/
    fout.close();

    /*****  example of fstream  for reading in data from a file *****/
    /***** 1. declare a file variable (fout or fin) *****/
    ifstream fin; 
    
    /***** 2. ofstream: open a file with the file avariable name *****/
    fin.open("inputfile_example1.txt");

    /***** note: when read in from file, EOF read to the end of the file **/
    /***** 3. do whatever we want *****/
    string numbers;
     
    
    while (getline(fin, numbers)){
        cout << numbers << endl;
    }


    /***** 4. close a file *****/ 
    fin.close();

}