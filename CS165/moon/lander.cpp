/***********************************************************************
 * Implementation File:
 *    GROUND : A class representing the lunar landscape
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything you needed to know about the ground but were afraid to ask
 ************************************************************************/

#include <iostream>
using namespace std;

#include "lander.h"
#include "velocity.h"
#include "point.h"
#include "uiDraw.h"
#include "uiInteract.h"
#include "game.h"

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/


void Lander :: setLanded(bool land)
{
    landed = land;


}

void Lander :: setAlive(bool lives)
{
    alive = lives;

}

void Lander :: setFuel(int  fuel)
{
    this -> fuel = fuel;
}


void Lander :: applyGravity(float  gravity)
{
    velocity.setDy(velocity.getDy() - gravity);  // sumar gravity al final
}

void Lander :: applyThrustLeft()
{
    if(fuel > 0)
    {
     velocity.setDx(velocity.getDx() + 0.1);
     fuel = fuel - 1;
    }
}

void Lander :: applyThrustRight()
{
    if(fuel > 0)
    {
     velocity.setDx(velocity.getDx() - 0.1);
     fuel = fuel - 1;
    }
}

void Lander :: applyThrustBottom()
{
   if(fuel > 2)
    {
     velocity.setDy(velocity.getDy() + 0.3);
     fuel = fuel - 3;
    }
}


void Lander :: advance()
{
    position.addX(velocity.getDx());
    position.addY(velocity.getDy());
}

void Lander :: draw()
{
    drawLander(position);  
}