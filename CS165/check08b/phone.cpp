/*********************
 * phone.cpp
 *********************/

#include "phone.h"

// TODO: Put your phone class methods here...

void Phone :: promptNumber()
{
    cout << "Area Code: ";
    cin >> areaCode;
    cout << "Prefix: ";
    cin >> prefix;
    cout << "Suffix: ";
    cin >> suffix;


    cin.ignore();
}


void Phone :: display()
{
    cout << "(" << areaCode << ")" << prefix << "-" << suffix << endl;
}