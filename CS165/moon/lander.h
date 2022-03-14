/***********************************************************************
 * Header File:
 *    GROUND : A class representing the lunar landscape
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything you needed to know about the ground but were afraid to ask
 ************************************************************************/

#ifndef LANDER_H
#define LANDER_H

#include <iostream>
using namespace std;

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/

class Lander
{
    private:

    Point position;
    Velocity velocity;
    bool alive;
    bool landed;
    int fuel;
    bool thrust;


    public:

    Lander() : position(0, 200), velocity(0, 0)
    {
        alive = true;
        landed = false;
        fuel = 0;
    };

    // Getters

    Point getPoint() const { cout << position << endl; return position;}
    Velocity getVelocity() const {return velocity;}
    bool isAlive() {return alive;}
    bool isLanded() {return landed;}
    int getFuel() { return fuel;}
    bool canThrust() {return true;}


    // Setters

    void setLanded(bool land);
    void setAlive(bool lives);
    void setFuel(int  fuel);


    // Methods (no change position)

    void applyGravity(float  gravity);
    void applyThrustLeft();
    void applyThrustRight();
    void applyThrustBottom();

// Methods that I created

    // void setGravity(float gravity) { velocity.setDy(gravity); }

    // Changes position
    void advance();

    // Only draws
    void draw();

};

#endif