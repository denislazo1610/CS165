// File: order.cpp

#include "order.h"

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Put your the method bodies for your order class here

void Order :: setProduct(Product newProduct)
{
   product = newProduct;
}

Product Order :: getProduct()
{
   return product;
}

void Order :: setQuantity(int newQuantity)
{
   quantity = newQuantity;
}

int Order :: getQuantity()
{
   return quantity;
}

void Order :: setCustomer(Customer newCustomer)
{
   customer = newCustomer;
}

Customer Order :: getCustomer()
{
   return customer;
}

double Order :: getTotalPrice()
{
   return (Order :: getProduct().getBasePrice() + Order :: getProduct().getSalesTax() + Order :: getProduct().getShippingCost())*Order :: getQuantity();

}

void Order :: displayShippingLabel()
{
   getCustomer().display();
}

void Order :: displayInformation()
{

   cout << getCustomer().getName() << endl;
   cout << getProduct().getName() << endl;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "Total Price: $" << getTotalPrice() << endl;

}

string Order :: getShippingZip()
{
   return getCustomer().getAddress().getZip();
}
