// File: address.cpp

#include "address.h"

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Put your method bodies for the address class here

void Address :: setStreet(string newStreet)
{
   street = newStreet;
}

string Address :: getStreet() const
{
   return street;
}

void Address :: setCity(string newCity)
{
   city = newCity;
}

string Address :: getCity() const
{
   return city;
}

void Address :: setState(string newState)
{
   state = newState;
}

string Address :: getState() const
{
   return state;
}

void Address :: setZip(string newZip)
{
   zip = newZip;
}

string Address :: getZip() const
{
   return zip;
}

void Address :: display()
{
   cout << street << endl;
   cout << city << ", " << state << " " << zip << endl;
}