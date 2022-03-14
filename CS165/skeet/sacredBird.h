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
#ifndef SACRED_BIRD_H
#define SACRED_BIRD_H

#include "bird.h"



class SacredBird : public Bird
{
    private:
    
    public:

    SacredBird() : Bird()
    {
        hits = 1;
    }

    virtual void draw()
    {
        const Point point = position;
        drawSacredBird(point, 15);
    }

    virtual int hit()
    {
        kill();
        return -10;
    }

  
};
#endif
