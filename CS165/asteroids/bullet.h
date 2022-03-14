#ifndef bullet_h
#define bullet_h

#define BULLET_SPEED 5
#define BULLET_LIFE 40

#include "flyingObject.h"



// Put your Bullet class here

class Bullet : public FlyingObject
{
    private:

    float angle;
    int health;

    public:

    Bullet() 
    {
        setAlive(true);
        health = BULLET_LIFE;
    }

    int getHealth() {return health;}

    void draw();

    void fire(Point position, float angle, Velocity velocity);

    //void advance();

};



#endif /* bullet_h */
