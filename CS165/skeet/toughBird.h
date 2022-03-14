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
#ifndef TOUGH_BIRD_H
#define TOUGH_BIRD_H

#include "bird.h"



class ToughBird : public Bird
{
    private:
    
    

    public:

    ToughBird() : Bird()
    {
        hits = 3;
    }

    virtual void draw()
    {
        const Point point = position;
        drawToughBird(point, 15, hits);
    }

    virtual int hit()
    {
        if(hits == 3)
        {
            hits--;
            return 1;
        }
        else if(hits == 2)
        {
            hits--;
            return 1;
        }
        else 
        {
            hits--;
            kill();
            return 3;
        }
    }

};

#endif
