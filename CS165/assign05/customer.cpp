// File: customer.cpp

#include "customer.h"

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Put the method bodies for your customer class here

void Customer :: setName(string newName)
{
   name = newName;  
}

string Customer :: getName()
{
   return name;
}

void Customer :: setAddress(Address newAddress)
{
   address = newAddress;
}

Address Customer :: getAddress()
{
   return address;
}

void Customer :: display()
{
   string newStreet = address.getStreet();
   string newCity = address.getCity();
   string newState = address.getState();
   string newZip = address.getZip();

   cout << name << endl;
   cout << newStreet << endl;
   cout << newCity << ", " << newState << " " << newZip << endl;
}