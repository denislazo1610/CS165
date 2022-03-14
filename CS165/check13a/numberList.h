/*******************
 * NumberList class
 *******************/
#ifndef NUMBER_LIST_H
#define NUMBER_LIST_H

#include <iostream>
using namespace std;

class NumberList
{
private:
   int size;
   int *array;

public:
   NumberList()
   {
      size = 0;
      array = NULL;
   }


   // TODO: Add your constructor and destructor

   NumberList(int tamano)
   {
       array = NULL;
       size = tamano;

       array = new int[tamano];

       for(int index = 0; index < tamano ; index++)
       {
           *(array+index) = 0;
       }

   }

   ~NumberList()
   {
       delete array;

       cout << "Freeing memory" << endl;
   }



   int getNumber(int index) const;
   void setNumber(int index, int value);
   
   void displayList() const;

};

#endif
