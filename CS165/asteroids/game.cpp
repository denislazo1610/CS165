/*********************************************************************
 * File: game.cpp
 * Description: Contains the implementaiton of the game class
 *  methods.
 *
 *********************************************************************/

#include "game.h"

// These are needed for the getClosestDistance function...
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;


// You may find this function helpful...

/**********************************************************
 * Function: getClosestDistance
 * Description: Determine how close these two objects will
 *   get in between the frames.
 **********************************************************/

float Game :: getClosestDistance(FlyingObject &obj1, FlyingObject &obj2) const
{
   // find the maximum distance traveled
   float dMax = max(abs(obj1.getVelocity().getDx()), abs(obj1.getVelocity().getDy()));
   dMax = max(dMax, abs(obj2.getVelocity().getDx()));
   dMax = max(dMax, abs(obj2.getVelocity().getDy()));
   dMax = max(dMax, 0.1f); // when dx and dy are 0.0. Go through the loop once.
   
   float distMin = std::numeric_limits<float>::max();
   for (float i = 0.0; i <= dMax; i++)
   {
      Point point1(obj1.getPoint().getX() + (obj1.getVelocity().getDx() * i / dMax),
                     obj1.getPoint().getY() + (obj1.getVelocity().getDy() * i / dMax));
      Point point2(obj2.getPoint().getX() + (obj2.getVelocity().getDx() * i / dMax),
                     obj2.getPoint().getY() + (obj2.getVelocity().getDy() * i / dMax));
      
      float xDiff = point1.getX() - point2.getX();
      float yDiff = point1.getY() - point2.getY();
      
      float distSquared = (xDiff * xDiff) +(yDiff * yDiff);
      
      distMin = min(distMin, distSquared);
   }
   
   return sqrt(distMin);
}

// Constructor

Game :: Game(Point tl, Point br) : topLeft(tl), bottomRight(br)
{
   createRock();  
    //rock = NULL;
}

Game :: ~Game()
{
    //delete rock;
}


// public methods

void Game :: advance()
{
    advanceRock();
    advanceShip();
    advanceBullet();
    collision();
    cleanZombies();
}

void Game :: draw(const Interface & ui)
{

    for(vector<Rock*> :: iterator it = rock.begin(); it != rock.end(); ++it)
    {
        if((*it) != NULL && (*it) -> isAlive())
        (*it) -> draw();
        
    }


     for(vector<Bullet> :: iterator it = bullets.begin(); it != bullets.end(); ++it)
    {
        if(it -> isAlive())
        it -> draw();
    }

    if(ship.isAlive())
    {
        ship.draw();
    }

    ship.setThrust(false);

}

void Game :: advanceRock()
{
    for(vector<Rock*> :: iterator it = rock.begin(); it != rock.end(); ++it)
    {
        (*it) -> advance();
        (*it) -> rotate();
    }
    
}

void Game :: advanceShip()
{
    ship.advance();
}

void Game :: advanceBullet()
{
    for(vector<Bullet> :: iterator it = bullets.begin(); it != bullets.end(); ++it)
    {
        if(it -> isAlive())
        {
        it -> advance(); 

        if(it -> getHealth() <= 0)
        it -> kill();

        }
    }  
}

void Game :: collision()
{
        
    vector<Rock*> babyRocks;

        int x = 0;
    for(vector<Rock*> :: iterator lol = rock.begin(); lol != rock.end(); ++lol)
    { 
      int size = (*lol) -> getSize();
      x++;

        for(vector<Bullet> :: iterator it = bullets.begin(); it != bullets.end(); ++it)
        {

          //Rock positionRock; 
          FlyingObject rocka = **lol;
          FlyingObject bullet = (*it);

        
        
          if(getClosestDistance(rocka ,  bullet) <= size && bullet.isAlive() && rocka.isAlive())
           {
  
              (*lol) -> kill();

            

              (*lol) -> hit(babyRocks);



              it -> kill();

           }

        }

        FlyingObject rock = **lol;

        FlyingObject nave = ship;
        if((getClosestDistance(rock, ship) <= size) && ship.isAlive() && rock.isAlive())
        {
           (*lol) -> kill();
           ship.kill();
        }
    }
        
    for(vector<Rock*> :: iterator lol = babyRocks.begin(); lol != babyRocks.end(); ++lol)
    {
        rock.push_back(*lol);
        (*lol) -> advance();
    }

}

void Game :: createRock()
{
    int quantity = 0;

    while(quantity < 5)
    {
    Rock * rocas = new BigRock;
    rocas -> setPoint(Point (random(-200,200),random(-200,200)));
    rock.push_back(rocas);
    quantity++;
    }

}

void Game :: handleInput(const Interface & ui)
{
    if (ship.isAlive())
   {
   
      if (ui.isUp())
      {
         ship.applyUp();
   
      }
      
      if (ui.isLeft())
      {
         ship.applyLeft();
      }
      
      if (ui.isRight())
      {
         ship.applyRight();
      }

       if (ui.isSpace())
      {
      Bullet newBullet;
      newBullet.fire(ship.getPoint(), ship.getAngle(), ship.getVelocity());
      //
      bullets.push_back(newBullet);
      }

   }

}

void Game :: cleanZombies()
{
    for(vector<Rock*> :: iterator it = rock.begin(); it != rock.end();)
    {
    if ( (*it) != NULL && !(*it) -> isAlive())
    {
    delete *it;

    *it = NULL;

    it = rock.erase(it);
    }
    else
    {
    ++it;
    }
    }

   vector<Bullet>::iterator bulletIt = bullets.begin();
   while (bulletIt != bullets.end())
   {
      Bullet bullet = *bulletIt;
      // Asteroids Hint:
      // If we had a list of pointers, we would need this line instead:
      //Bullet* pBullet = *bulletIt;
      
      if (!bullet.isAlive())
      {
         // If we had a list of pointers, we would need to delete the memory here...
         
         
         // remove from list and advance
         bulletIt = bullets.erase(bulletIt);
      }
      else
      {
         bulletIt++; // advance
      }
   }


/**
    if(!(ship.isAlive()))
    {
        delete ship;
    }

    */
}



// private methods 



