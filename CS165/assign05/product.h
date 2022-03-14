/***************************************************************
 * File: product.h
 * Author: Denis Lazo
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;


// put your class definition here

class Product
{
   private:

   string name;
   double price;
   double weight;
   string description;

   public:

   Product()
   {
      name = "none";
      description = "";
      weight = 0;
      price = 0;
   }

   Product(string aName, string aDescription, double aPrice, double aWeight)
   {
      name = aName;
      price = aPrice;
      weight = aWeight;
      description = aDescription;
   }

   void setName(string newName);
   string getName();

   void setDescription(string newDescription);
   string getDescription();

   void setBasePrice(double newPrice);
   double getBasePrice();

   void setWeight(double newWeight);
   double getWeight();

   void displayAdvertising();

   void displayInventory();

   double getSalesTax();

   double getShippingCost();

   void displayReceipt();
};


#endif
