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
#ifndef BIRD_H
#define BIRD_H


#include "flyingObject.h"

using namespace std;


class Bird : public FlyingObject
{
    protected:

    int hits;


    public:

    Bird() : FlyingObject()
    {

    }


    Bird(Point point) : FlyingObject()
    {
        //setPoint(position);

        setPoint(point);

        

        hits = 0;

    }



    virtual void draw() = 0;
    
    // Methods for this class 


    virtual int hit();


};

#endif
