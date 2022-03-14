// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

#include <string>

using namespace std;

// put your Customer class here

class Customer
{
   private:

   string name;
   Address address;

   public:

   Customer()
   {
      name = "unspecified";
      address = Address();
   }

   Customer(string aName, Address aAddress)
   {
      name = aName;
      address = aAddress;
   }

   void setName(string newName);
   string getName();

   void setAddress(Address newAddress);
   Address getAddress();

   void display();
};

#endif
