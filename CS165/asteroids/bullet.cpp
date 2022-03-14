#include "bullet.h"


// Put your bullet methods here

void Bullet :: draw()
{
    if(isAlive())
    {
    drawDot(getPoint());
    health--;
    }
}

void Bullet :: fire(Point position, float angle, Velocity velocity)
{

   setPoint(position);
   setAlive(true);

   this -> angle = angle;
    
   float dx = BULLET_SPEED * (cos(M_PI / 180.0 * (angle + 90)));
   float dy = BULLET_SPEED * (sin(M_PI / 180.0 * (angle + 90)));

   dx = velocity.getDx() + dx;
   dy = velocity.getDy() + dy;

   Velocity velocidad(dx, dy);
   setVelocity(velocidad);
}

/*
void Bullet :: advance()
{

    getPoint().addX(getVelocity().getDx());
    getPoint().addY(getVelocity().getDy());

 
    if(getPoint().getX() <= -200 || getPoint().getX() >= 200)
    {
        getPoint().setX(getPoint().getX()*-1);
    }

    if(getPoint().getY() <= -200 || getPoint().getY() >= 200)
    {
        getPoint().setY(getPoint().getY()*-1);
    }  
}
*/