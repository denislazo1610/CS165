/***********************************************************************
* Program:
*    Checkpoint ###, ????          (e.g. Checkpoint 01a, review)  
*    Brother {Burton, Falin, Ercanbrack, Comeau}, CS165
* Author:
*    your name
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
    char name[256];
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
