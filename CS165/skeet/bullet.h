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
#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include <cmath>

#define BULLET_SPEED 10.0


class Bullet : public FlyingObject
{
    private:
    
    float angle;

    public:

    Bullet() : FlyingObject()
    {
        
        angle = 75;
        setAlive(true);
        

    }


    void draw()
    {
        drawDot(getPoint());
    }


    // Methods for this class

   

    void fire(Point position, float angle);


};

#endif
