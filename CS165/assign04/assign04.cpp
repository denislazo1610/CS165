/***************************************************************
 * File: assign04.cpp
 * Author: Denis Lazo
 * Purpose: Contains the main function to test the Product class.
 ***************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

#include "product.h"

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

   // Declare your Product object here

   Product product;
   

   // Call your prompt function here

   product.prompt();



   
   cout << "Choose from the following options:\n";
   cout << "1 - Advertising profile\n";
   cout << "2 - Inventory line item\n";
   cout << "3 - Receipt\n";
   cout << endl;
   cout << "Enter the option that you would like displayed: ";

   int choice;
   cin >> choice;

   cout << endl;

   if (choice == 1)
   {
      // Call your display advertising profile function here
      product.advertising();
   }
   else if (choice == 2)
   {
      // Call your display inventory line item function here
      product.inventory();
   }
   else
   {
      // Call your display receipt function here
      product.receipt();
   }

   return 0;
}
