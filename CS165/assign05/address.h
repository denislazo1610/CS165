// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;

// Put your Address class here

class Address
{
   private:

   string street;
   string city;
   string state;
   string zip;

   public:

   Address()
   {
      street = "unknown";
      city = "";
      state = "";
      zip = "00000";
    }   

   Address(string aStreet, string aCity, string aState, string aZip)
   {
      street = aStreet;
      city = aCity;
      state = aState;
      zip = aZip;
   } 

   void setStreet(string newStreet);
   string getStreet() const;

   void setCity(string newCity);
   string getCity() const;

   void setState(string newState);
   string getState() const;

   void setZip(string newZip);
   string getZip() const;

   void display();

};

#endif
