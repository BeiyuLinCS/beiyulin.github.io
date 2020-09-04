/////////////////////////////////////////////////////////////////////
//
// Name: Noe De La Mora, revisions by Christine Reilly
// Date: July 2, 2011, Revised July 12, 2011
// Class: CSCI/CMPE 1170.03
// Semester: Fall 2011
// CSCI/CMPE 1370 Instructor: Christine Reilly
//
// Program Name: The Dateable Equation
// Program Description: Calculate the lowest age of the person that
//      a person of a given age should date.
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
	// This statement declares and initializes an int variable called age
	// Variable age is used to hold the age of the person and it is initialized to 22 
	//Change this age to find different dateable ages
	int age = 22;  
	
	// This is the variable that will hold the lowest dateable
	// age given the age of the person (specified above)
	int dateable; 

	// This is the dateable equation. it assigns the result to
	// the variable "dateable" of type int.
	// Notice how parenthesis are used to make the equation more readable
	dateable = (age / 2) + 7;

	//tells the user the result of the dateable equation.
	cout << "Your minimum dateable age is: " << dateable << endl;

	system("pause");

	return 0;
}