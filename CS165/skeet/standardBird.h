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
#ifndef STANDARD_BIRD_H
#define STANDARD_BIRD_H

#include "bird.h"
#include "point.h"
#include "flyingObject.h"



class StandardBird : public Bird
{
    private:
    
   

    public:

    StandardBird() : Bird()
    {
        hits = 1;
    }

    virtual void draw()
    {
        const Point point = position;
        drawCircle(point, 15);
    }

    virtual int hit()
    {   
        kill();
        return 1;
    }


};

#endif
