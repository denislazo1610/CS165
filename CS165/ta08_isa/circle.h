
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "point.h"

using namespace std;

/***********************************************************
 * Function: Point :: display
 * Outputs a point to the screen.
 ***********************************************************/
class Circle : public Point
{
    private:
    float radius;


    public:

    Circle() : Point()
    {
        radius = 0;
    }

    // getters

    float getRadius() { return radius; }

    // setters

    void setRadius(float newPoint); 

    // methods

    void promptForCircle();

    void display();
    
};


#endif