#include <iostream>
#include <string>
// fstream includes both the output file stream and input file stream.
using namespace std;



// in any program/ project in c++ / c language, we must have one and ONLY one main function.
int main()
{
    enum grades {A, B, C, D, E, F};
    // define the int type <=> enum int {-2, -1, 0, 1,2,3,4,5};

    grades grade_student1; 
    // int number_variable;

    grade_student1 = A;
    // number_variable = 5; 

    // if (grade_student1 == A) {
    //     cout << "the grade for student 1 is A" << endl;
    // }
    // else{
    //     cout << "the grade for student 1 is NOT A" << endl;
    // }

    float gpa_student = 0.0;

    switch (grade_student1) {
        case C:
            gpa_student = 2.0;
            break;
        case B:
            gpa_student = 3.0;
            break;
        default:
            cout << "the grade of this student is neither C, nor B." << endl;
    }

    cout << "the gpa of this student is  " << gpa_student << endl;

    // convert the grade into GPA for ONE students who took 10 classes. The class grade is reading from a file.
    // using fin to open and read the data from file
    // using a while/ for loop to reach each line of the file, getline <=> read each line (each line is just a grade for each class)
    // convert the grade from each line to a number by calling a function with the switch structure. 

    int number_variable2 = 1;
    if (number_variable2)
    { 
        cout << "do whatever we want in the statements" << endl;
    }else {
        cout << "haha, it's not true." <<endl;
    }

    // devision: 3/0 => current C++ system will only give warning 
    // question: how to avoid the situation (e.g., 3/0)? 
    // one possible solution is to use the if condition 
    // if (3/0){}
    // else{} <=> not an optimal solution 

    // assert
    assert(!number_variable2);
    // call a function
    // do the calculation

}