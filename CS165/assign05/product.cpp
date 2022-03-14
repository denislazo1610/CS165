/***************************************************************
 * File: product.cpp
 * Author: Denis Lazo
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iomanip>

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// put your method bodies here

void Product :: setName(string newName)
{
   name = newName;
}

string Product :: getName()
{
   return name;
}

void Product :: setDescription(string newDescription)
{
   description = newDescription;
}

string Product :: getDescription()
{
   return description;
}

void Product :: setBasePrice(double newPrice)
{
   price = newPrice;
}

double Product :: getBasePrice()
{
   return price;
}

void Product :: setWeight(double newWeight)
{
   weight = newWeight;
}

double Product :: getWeight()
{
   return weight;
}

void Product :: displayAdvertising()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << name << " - $" << price << endl;
   cout << "(" << description << ")" << endl;

   return;
}

void Product :: displayInventory()
{
   cout << "$" << price << " - " << name << " - ";
   cout.precision(1);
   cout << weight << " lbs"<< endl;

   return;
}

double Product::getSalesTax()
{
   double tax = price * 0.06;

   return tax;
}

double Product::getShippingCost()
{
   double priceShip = 2.00;


   if(weight < 5 && weight > 0)
   {
      return priceShip;
   }
   else if (weight > 5)
   {
      double pricePerPound = weight - 5;
      pricePerPound = pricePerPound * 0.10;
      priceShip = priceShip + pricePerPound;
      return priceShip;
   }
   else if(weight == 0)
   {
      priceShip = 0;
      return priceShip;
   }

   return 0;
}

void Product :: displayReceipt()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   double total = price + Product::getSalesTax() + Product::getShippingCost();
   cout << name << endl;
   cout << "  Price:         $" << setw(8) << price << endl;
   cout << "  Sales tax:     $" << setw(8) << Product::getSalesTax() << endl;
   cout << "  Shipping cost: $" << setw(8) << Product::getShippingCost() << endl;
   cout << "  Total:         $" << setw(8) << total << endl;
    
}