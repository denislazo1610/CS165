/*************************************************************
 * File: bullet.cpp
 * Author: Br. Burton
 *
 * Description: Defines a Bullet.
 *
 * Please DO NOT share this code with other students from
 *  other sections or other semesters. They may not receive
 *  the same code that you are receiving.
 *************************************************************/

#include "bullet.h"



void Bullet::fire(Point position, float angle)
{

   setPoint(position);

   this -> angle = angle;
    
   float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
   float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

   Velocity velocidad(dx, dy);
   setVelocity(velocidad);
}

