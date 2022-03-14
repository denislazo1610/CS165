#include "flyingObject.h"
#include "uiDraw.h"


// Put your FlyingObject method bodies here

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
    //position.addX(random(2,4));
    //position.addY(random(2,4));

    position.addX(velocity.getDx());
    position.addY(velocity.getDy());

    if(position.getX() <= -200 || position.getX() >= 200)
    {
        position.setX(position.getX()*-1);
    }

    if(position.getY() <= -200 || position.getY() >= 200)
    {
        position.setY(position.getY()*-1);
    }
}

float FlyingObject:: getAngle()
{
    return angle;
}

void FlyingObject :: setAngle(float angle)
{
    this -> angle = angle;
}