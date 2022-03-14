/***********************************************************************
* Program:
*    Checkpoint 03b, Errors
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
int prompt(int number)
{
    cout << "Enter a number: ";
    cin >> number;

    while(cin.fail())
    {
        cin.clear();
        cout << "Invalid input." << endl;
        cin.ignore(256,'\n');
        cout << "Enter a number: ";
        cin >> number;
    }


    return number;
}


int main()
{
    int number = prompt(number);

    cout << "The number is " << number << "." << endl;


    return 0;
}
