// *********************************************************************
// Author:		<your name here>
// Class:		CSCI/CMPE 1170
// Lab:			working with arrays
// Date:		March 2, 2010
// Revised on:          
// Comment:		The code here is meant to be revised.
//
//----------------------------------------------------------------------
//
// This lab exercise is to practice declaring arrays, changing them, and
// using functions to change them.
// **********************************************************************

#include <iostream>
#include <string>
using namespace std;

// function prototypes go here

void print_array( double a[], int size );


// function definitions go here

void print_array( double a[], int size )
{
  int i;
  
  cout << "Printing array: " << endl;
  for( i=0; i<size; i++ )
  {
    cout << i << ": " << a[i] << endl;
  }
}


