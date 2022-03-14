/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions  
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
void prompt(int & number)
{
    cout << "Enter a number: ";
    cin >> number;

    if(number < 0)
    {
      throw string("number Negative");
    }
    else if (number > 100)
    {
      throw "numberGreater";
    }
    else if(number%2 != 0)
    {
      throw 3;
    }

    cout << "The number is " << number << "." << endl;

    return;
}

int main()
{
    int value;

    try
    {
    prompt(value);
    }

    catch (string i)
    {
        cout << "Error: The number cannot be negative." << endl;
    }
    catch (const char * x)
    {
        cout << "Error: The number cannot be greater than 100." << endl;
    }
    catch (int y)
    {
        cout << "Error: The number cannot be odd." << endl;
    }


   return 0;
}
