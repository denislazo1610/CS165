/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

using namespace std;


// put your class definition here

class Date
{
    private:

    string month;
    string day;
    string year;

    public:

    void set();
    void displayAmerican();
    void displayEuropean();
    void displayISO(); 

};
// along with the data members, and method prototypes




#endif
