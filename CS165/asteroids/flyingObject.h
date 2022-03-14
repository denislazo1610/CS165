#ifndef flyingObject_h
#define flyingObject_h




// Put your FlyingObject class here
#include "point.h"
#include "velocity.h"
#include "uiDraw.h"



class FlyingObject
{
    protected:
   
    
    Point position;
    Velocity velocity;
    bool alive;
    float angle;
    int size;

    public:

    

    FlyingObject() : position(0 , 0), velocity(0, 0)
    {
        alive = true;
    }

    // Getters

    Point getPoint(); 
    Velocity getVelocity();
    bool isAlive();
    float getAngle(); 
    int getSize() {return size;}

    // Setters

    void setAlive(bool alive) { this -> alive = alive; }
    void setPoint(Point position);
    void setVelocity( Velocity velocity);
    void setAngle( float angle);

    void setSize(int size) { this -> size = size;}


    // Methods 

    void kill() { alive = false;}
    void advance();

    


};



#endif /* flyingObject_h */
