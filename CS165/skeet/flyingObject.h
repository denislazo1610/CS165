/*************************************************************
 * File: rifle.h
 * Author: Br. Burton
 *
 * Description: Defines a Rifle.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/


#ifndef flyingObject_H
#define flyingObject_H

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"



class FlyingObject
{
    protected:
   
    
    Point position;
    Velocity velocity;
    bool alive;

    public:

    

    FlyingObject() : position(0 , 0), velocity(0, 0)
    {
        alive = true;
    }

    // Getters

    Point getPoint();
    Velocity getVelocity();
    bool isAlive();

    // Setters

    void setAlive(bool alive) { this -> alive = alive; }
    void setPoint(Point position);
    void setVelocity( Velocity velocity);


    // Methods 

    void kill() { alive = false;}
    void advance();

    


};


#endif
