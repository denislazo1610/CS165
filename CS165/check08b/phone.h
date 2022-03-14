/***************
 * phone.h
 ***************/
#include <iostream>
#include <string>

using namespace std;

#ifndef PHONE_H
#define PHONE_H

// TODO: Put your phone class definition here...

class Phone
{
    private:

    int areaCode;
    int prefix;
    int suffix;

    public:

    // methods

    void promptNumber();

    void display();

};


#endif
