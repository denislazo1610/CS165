/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays
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
void getSize()
{
    cout << "Enter the size of the list: ";
    return;
}

void getList(int size)
{

    int numbers[size];
    

    for (int x = 0; x < size; x++)
    {

       cout << "Enter number for index " << x << ": ";
       cin >> numbers[x];

    }

    cout << endl;
    cout << "The following are divisible by 3:" << endl;

        for (int x = 0; x < size; x++)
    {

      if(numbers[x]%3 ==0)
      {
          cout << numbers[x] << endl;
      }

    }
   

    return;
}



int main()
{
   int size;
   getSize();
   cin >> size;

   int numbers[size];

   getList(size);

   


   return 0;
}
