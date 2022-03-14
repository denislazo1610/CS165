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

   void prompt();
   void display() const;


 
   void setDollars(int aDollars);
   void setCents(int aCents);


   int getDollars() const;
   int getCents() const;
   
};

#endif
