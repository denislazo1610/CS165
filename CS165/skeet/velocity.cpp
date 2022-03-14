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

#include "velocity.h"
#include "point.h"

void Velocity::add(const Velocity & other)
{
   dx += other.dx;
   dy += other.dy;
}

void Velocity::advancePoint(Point & point)
{
   point.addX(dx);
   point.addY(dy);
}
