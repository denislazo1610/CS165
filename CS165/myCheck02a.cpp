/***********************************************************************
* Program:
*    Checkpoint 02a, Structs  
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
struct Student
{
 string firstName;
 string lastName;
 int id;
};

void displayStudent(Student & pos)
{
cout << "Please enter your first name: ";
cin >> pos.firstName;

cout << "Please enter your last name: ";
cin >> pos.lastName;

cout << "Please enter your id number: ";
cin >> pos.id;

cout << endl;
cout << "Your information:" << endl;

cout << pos.id << " - " << pos.firstName << " " << pos.lastName << endl;
};

int main()
{
    Student user;

    displayStudent(user);

    
   return 0;
}
