/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
********************************************************************/

#include "date.h"
#include <iostream>
#include <string>

using namespace std;



// Put your method bodies here...

void Date::set()
{
    cout << "Month: ";
    cin >> month;
    cout << "Day: ";
    cin >> day;
    cout << "Year: ";
    cin >> year;

    return;
}

void Date::displayAmerican()
{
    cout << endl;
    cout << month << "/" << day << "/" << year << endl;
    return;
}

void Date::displayEuropean()
{
    cout << day << "/" << month << "/" << year << endl;
    return;
}

void Date::displayISO()
{
    cout << year << "-" << month << "-" << day << endl;
}