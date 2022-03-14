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

#include "flyingObject.h"

using namespace std;


Point FlyingObject::getPoint() 
{
    return position;
}

Velocity FlyingObject::getVelocity() 
{
    return velocity;
}

bool FlyingObject::isAlive()
{
    return alive;
}

void FlyingObject::setPoint(Point position)
{
    
    this -> position = position;
}

void FlyingObject::setVelocity(Velocity velocity)
{
    this -> velocity = velocity;
}

void FlyingObject::advance()
{
    position.addX(velocity.getDx());
    position.addY(velocity.getDy());
}





