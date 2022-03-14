// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"

#include <string>

using namespace std;

// Put your Order class here

class Order
{
   private:

   Product product;
   int quantity;
   Customer customer;

   public:

   Order()
   {
      quantity = 0;

      product = Product();

      customer = Customer();
   }

   Order(Product aProduct, int aQuantity, Customer aCustomer)
   {
      product = aProduct;
      quantity = aQuantity;
      customer = aCustomer;
   }


   void setProduct(Product newProduct);
   Product getProduct();

   void setQuantity(int newQuantity);
   int getQuantity();

   void setCustomer(Customer newCustomer);
   Customer getCustomer();

   string getShippingZip();

   double getTotalPrice();

   void displayShippingLabel();

   void displayInformation();

};

#endif
