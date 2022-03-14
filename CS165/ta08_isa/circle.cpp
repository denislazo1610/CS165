#include <iostream>
#include "circle.h"

using namespace std;

/***********************************************************
 * Function: Point :: display
 * Outputs a point to the screen.
 ***********************************************************/
// Setter
void Circle::setRadius(float newPoint)
{
    radius = newPoint; 
}

// methods

 void Circle:: promptForCircle() 
    {
        Point::promptForPoint();
        cout << "Enter radius: ";
        cin >> radius;
        return;
    }

void Circle::display()
{
    Point:: display();
    cout << " - Radius: " << radius << endl;
}