/******************
 * File: money.h
 ******************/
#ifndef MONEY_H
#define MONEY_H

#include <iostream>

/******************************************************
 * Class: Money
 * Description: Holds a value of dollars and cents.
 ******************************************************/
class Money
{
private:
   int dollars;
   int cents;

public:
   /************************
    * Constructors
    ************************/
   Money()
   {
      setDollars(0);
      setCents(0);
   }

   Money(int dollars, int cents)
   {
      setDollars(dollars);
      setCents(cents);
   }

   /************************
    * Getters and Setters
    ************************/
   int getDollars() const { return dollars; }
   int getCents() const { return cents; }
   
   // These could be done in a smarter way to add cents to dollars if more than 100 etc.
   // but we're trying to keep it simple for this assignment...
   void setDollars(int dollars) { this->dollars = dollars; }
   void setCents(int cents) { this->cents = cents; }

   /************************
    * Other public methods
    ************************/
   void prompt();
   void display() const;


   /************************
    * Member operators
    ************************/
   Money operator += (const Money & money)
   {
       this -> dollars += money.getDollars();
       this -> cents += money.getCents();
       while(this -> cents > 100)
       {
           this -> cents  -= 100;
           this -> dollars += 1;
       }

       return *this;
   }

   Money operator + (const Money & money) 
   {
       Money newMoney;
       newMoney.dollars = this -> dollars + money.dollars;
       newMoney.cents = this -> cents + money.cents;

       while(newMoney.cents > 100)
       {
           newMoney.cents -= 100;
           newMoney.dollars += 1;
       }

       return newMoney;
   }

   Money operator ++ ()
   {
       cents++;

       if(cents == 100)
       {
           dollars++;
           cents -= 100;
       }


       return *this;
   }



   // TODO: Put your protoypes here!




   /*************************
    * Private helper methods
    *************************/
   void handleOverflow();

};

#endif
