/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/
#include <iostream> 
#include <vector>


using namespace std; 


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    vector<int> numbers;

    int number = 1;

    while(number !=0)
    {
        cout << "Enter int: ";
        cin >> number;
        numbers.push_back(number);
    }

    cout << "Your list is:" << endl;

    for(int i = 0; i < numbers.size(); i++)
    {
        if(numbers[i] != 0)
        cout << numbers[i] << endl;
    }
    cout << endl;

    vector<string> names;

    string quit = "nothing";

    while(quit != "quit")
    {
        cout << "Enter string: ";
        cin >> quit;
        names.push_back(quit);
    }

    cout << "Your list is:" << endl;

      for(int i = 0; i < names.size(); i++)
    {
        if(names[i] != quit)
        cout << names[i] << endl;
    }


   return 0;
}


