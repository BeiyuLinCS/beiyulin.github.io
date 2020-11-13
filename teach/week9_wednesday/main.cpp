#include "myfunctions.h"



int main()
{
    Date date_obj1;               // denote date_obj1 as an object and initialized.
    Date date_obj2(2020, 11, 11); // denote date_obj2 as an object and initialized.

    cout << date_obj1.month << endl; // 10
    cout << date_obj2.month << endl; // 11
    date_obj2.before(date_obj1, date_obj2);


    
}