#ifndef ship_h
#define ship_h

#define SHIP_SIZE 10

#define ROTATE_AMOUNT 6
#define THRUST_AMOUNT 0.5

#include <iostream>
using namespace std;

#include "point.h"
#include "velocity.h"
#include "uiDraw.h"

#include "flyingObject.h"

#include <cmath>

// Put your Ship class here

class Ship : public FlyingObject
{
    private:

    bool thrust;



    public:

    Ship() 
    {
        alive = true;
        thrust = false;
    }

    //Getters

   

    // Setters

    void setThrust(bool fuego) { thrust = fuego;}
   
    // Methods angle ship

    void applyLeft();
    void applyRight();

    // EMethod Movement 

    void applyUp();
    

    // Methods that I create

    void draw();



};


#endif /* ship_h */
