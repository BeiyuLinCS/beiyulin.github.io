#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_ENTRIES = 200;

void print_employee( string name[], string position[], 
					 int review_score[], int i )
{
	cout << "  " << name[i] << " (" 
		 << position[i] << "): last review "
		 << review_score[i] << endl;
}

int lookup_employee( string name[], int empct, string lookup_name )
{
	// loop
	for( int i=0;i<empct;i++ )
	{
		// check name against name array
		if( lookup_name == name[i] )
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	ifstream shrug;

	string name[MAX_ENTRIES];
	string position[MAX_ENTRIES];
	int review_score[MAX_ENTRIES];

	int employee_ct = 0;

	shrug.open( "2102-data.txt" );

	while( !shrug.eof() )
	{
		if( employee_ct < MAX_ENTRIES )
		{
			shrug >> name[employee_ct];
			shrug >> position[employee_ct];
			shrug >> review_score[employee_ct];
			employee_ct++;
	
			shrug.ignore( 1, '\n' );

		} else {
			cout << "Bad things!" << endl;
			return -1;
		}
	}

	shrug.close();

	cout << "We have " << employee_ct << " employees" << endl;

	for( int i=0;i<employee_ct;i++ )
	{
		print_employee( name, position, review_score, i );
	}

	string lookup_name;
	cout << "Please enter a name to lookup: ";
	cin >> lookup_name;

	int n = lookup_employee( name, employee_ct, lookup_name );
	if( n != -1 )
	{
		print_employee( name, position, review_score, n );
	}
	else
	{
		cout << "That employee doesn't exist." << endl;
	}

	return 0;
}
