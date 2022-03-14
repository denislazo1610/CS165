#ifndef rocks_h
#define rocks_h

#define BIG_ROCK_SIZE 16
#define MEDIUM_ROCK_SIZE 8
#define SMALL_ROCK_SIZE 4

#define BIG_ROCK_SPIN 2
#define MEDIUM_ROCK_SPIN 5
#define SMALL_ROCK_SPIN 10

#include "flyingObject.h"
#include "uiDraw.h"

#include <vector>

using namespace std;

// Define the following classes here:
//   Rock
class Rock : public FlyingObject
{
    private:

    int hits;

    public:

    Rock() : FlyingObject() 
    {
        setPoint(position);
        hits = 0;
    }

    virtual void draw() = 0;

    void setHits(int hits) { this -> hits = hits;}

    virtual void hit(vector <Rock*> & rock) = 0;

    virtual void rotate() = 0;
};

//   BigRock

class BigRock : public Rock
{
    private:

    public:

    BigRock() 
    { 
    Velocity velocidad(random(-3,3), random(-3,3));

    velocity = velocidad;
    //setPoint(position);
    setHits(1);
    setAngle(random (0, 360));
    setSize(16);
    }

    virtual void draw()
    {
        const Point point = position;
        drawLargeAsteroid(point, angle);
    }

    virtual void rotate()
    {
        angle = angle + 2;
    }

    virtual void hit(vector <Rock*> & rock);

};


//   MediumRock

class MediumRock : public Rock
{
    private:

    public:

    MediumRock(Point position, Velocity velocity, float angle) : Rock() 
    {
        setHits(1);
        setSize(8);
        setVelocity(velocity);
        setPoint(position);
        setAngle(angle);
        setAlive(true);

    }

    virtual void draw()
    {
        const Point point = position;
        drawMediumAsteroid(point, 5);
    }


    virtual void rotate()
    {
        angle = angle + 5;
    }


    virtual void hit(vector <Rock*> & rock);

};

//   SmallRock

class SmallRock : public Rock
{
    private:

    public:

    SmallRock(Point position, Velocity velocity, float angle) : Rock()
    {
        setHits(1);
        setSize(4);

        setVelocity(velocity);
        setPoint(position);
        setAngle(angle);
        setAlive(true);
    }

    virtual void draw()
    {
        const Point point = position;
        drawSmallAsteroid(point, 10);
    }

    virtual void hit(vector <Rock*> & rock);

      virtual void rotate()
    {
        angle = angle + 10;
    }
};


#endif /* rocks_h */
