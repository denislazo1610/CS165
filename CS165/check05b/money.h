/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H
#include <iostream>
#include <iomanip>
using namespace std;

class Money
{
private:
   int dollars;
   int cents;

public:

    Money()
    {
        dollars = 0;
        cents = 0;
    }

    Money(int aDollars)
    {
        if(aDollars < 0)
        {
            aDollars = aDollars *-1;
        }
        dollars = aDollars;
        cents = 0;
    }

    Money(int aDollars, int aCents)
    {
        if(aDollars < 0)
        {
            aDollars = aDollars *-1;
        }
        dollars = aDollars;

        if(aCents < 0)
        {
            aCents = aCents *-1;
        }
        cents = aCents;
    }

   void prompt();
   void display() const;


 
   void setDollars(int aDollars);
   void setCents(int aCents);


   int getDollars() const;
   int getCents() const;
   
};

#endif
