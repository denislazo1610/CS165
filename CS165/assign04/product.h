/***************************************************************
 * File: product.h
 * Author: Denis Lazo
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
#include <iostream>

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

    void prompt();
    double getSalesTax();
    double getShippingCost();
    int TotalPrice();

    void advertising();
    void inventory();
    void receipt();
};


#endif
