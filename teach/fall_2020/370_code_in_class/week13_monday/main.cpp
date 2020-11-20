#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int *p;
    int num = 20;
    p = &num;
    *p = 35;
    cout << "the value of num is " << num << endl;
    cout << "the value of *p is " << *p << endl;

}