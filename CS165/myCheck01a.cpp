/***********************************************************************
* Program:
*    Checkpoint 01a, C++ Basics  
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    char name[10];
    int age;
    cout << "Hello CS 165 World!" << endl;
    cout << "Please enter your first name: ";
    cin >> name;
    cout << "Please enter your age: ";
    cin >> age;

    cout << endl;

    cout << "Hello " << name 
    << ", you are " << age << " years old." << endl;



   return 0;
}
