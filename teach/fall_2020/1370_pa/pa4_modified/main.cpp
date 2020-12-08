// ***********************************************************************************
// Author:		<your name here>
// Class:		CSCI/CMPE 1170
// Lab:			Movie DB
// Revised on:          
// Comment:		The code here is meant to be revised.
// ***********************************************************************************

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// ***********************************************************************************
// In this PA, you'll be testing a simple Movie database to ensure that it
//
// The class you are testing is in the files moviedb.h and moviedb.cpp.
//
// ***********************************************************************************

// #include "actor.h"
#include "moviedb.h"

int main()
{
	// Write tests to verify that MovieDB works as intended

	// Test A: Test that after calling AddActor on a MovieDB, ActorInDb works as specified
	MovieDB moviesdb;
	string a;
	bool in_or_not;
	a = moviesdb.AddActor("dafda");
	cout<< a << endl;
	in_or_not = moviesdb.ActorInDb("dafda");
	cout << "in_or_not: " << in_or_not << endl;
	cout << endl;
	in_or_not = moviesdb.ActorInDb("test_actor1");
	cout << "in_or_not: " << in_or_not << endl;
	

	// Test B: Test that after calling AddActor on a MovieDB, specifying both Actors that
	//         are and are not already in the MovieDB, PrintAll displays the expected
	//         output (just visual confirmation).
	cout << "******** task B ActorInMovie ********" << endl;
	cout << moviesdb.ActorInMovie("dafda", "movie1")<< endl;
	moviesdb.PrintAll();
	cout << endl;

	// Test C: Test that after calling AddRole on a MovieDB, specifying both Actors that
	//         are and are not already in the MovieDB, ActorInDb works as specified

	cout << "******** test C addrole ********" << endl;
	cout << moviesdb.AddRole("dafda", "movie1") << endl;

	// Test D: Test that after calling AddRole on a MovieDB, ActorInMovie works as specified
	cout << "******** test D ********" << endl;
	cout << moviesdb.ActorInMovie("dafda", "movie1") << endl;
	moviesdb.PrintAll();

	system("Pause");
	return 0;
}
