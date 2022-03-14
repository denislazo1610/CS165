/***************************************************************
 * File: product.cpp
 * Author: Denis Lazo
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/

#include "product.h"
#include <iomanip>

// put your method bodies here

void Product::prompt()
{
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter description: ";
    getline(cin, description);

    cout << "Enter weight: ";
    cin >> weight;

    cout << "Enter price: ";
    cin >> price;
    if(price < 0)
    {
        cout << "Enter price: ";
        cin >> price;
    }
    
    
      if(cin.fail())
    {
        cin.clear();
        cout << "Enter price: ";
        cin.ignore(256,'\n');
        cin >> price;
    }
    

    cout << endl;

    return;
}

void Product::advertising()
{

    cout << name << " - $" << price << endl;
    cout << "(" << description << ")" << endl;

    return;
}

void Product::inventory()
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


    if(weight < 5)
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

    return 0;
}

void Product::receipt()
{
    double total = price + Product::getSalesTax() + Product::getShippingCost();
    cout << name << endl;
    cout << "  Price:         $" << setw(8) << price << endl;
    cout << "  Sales tax:     $" << setw(8) << Product::getSalesTax() << endl;
    cout << "  Shipping cost: $" << setw(8) << Product::getShippingCost() << endl;
    cout << "  Total:         $" << setw(8) << total << endl;
    return;
}