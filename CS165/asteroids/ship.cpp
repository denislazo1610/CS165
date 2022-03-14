#include "ship.h"

// Put your ship methods here


void Ship :: draw()
{
    drawShip(position, angle, thrust);
}

void Ship :: applyUp()
{
   float dx = 0.5 * (cos(M_PI / 180.0 * (angle + 90)));
   float dy = 0.5 * (sin(M_PI / 180.0 * (angle + 90)));

   dx = dx + velocity.getDx();
   dy = dy + velocity.getDy();

    Velocity velocidad(dx, dy);
    setVelocity(velocidad);

    thrust = true;
}

void Ship :: applyLeft()
{
    angle += 6;   
}

void Ship :: applyRight()
{
     angle -= 6;
}

