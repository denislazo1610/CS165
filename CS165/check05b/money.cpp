/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}


void Money :: setDollars(int aDollars)
{
 if(aDollars < 0)
   {
    aDollars = aDollars * -1;
   }

   dollars = aDollars;
}


void Money :: setCents(int aCents)
{
 if(aCents < 0)
   {
    aCents = aCents * -1;
   }

   cents = aCents;
}


int Money :: getDollars() const
{
   return dollars; 
}


int Money :: getCents() const
{
   return cents;
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/


void Money :: display() const  
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

