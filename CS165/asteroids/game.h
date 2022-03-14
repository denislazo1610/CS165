/*********************************************************************
 * File: game.h
 * Description: Defines the game class for Asteroids
 *
 *********************************************************************/

#ifndef GAME_H
#define GAME_H

#include <vector>
#include "uiDraw.h"
#include "uiInteract.h"
#include "point.h"
#include "velocity.h"

// I included this 
#include "ship.h"

#include "bullet.h"

#include "rocks.h"

using namespace std;

class Game
{

   private:

   Point topLeft;
   Point bottomRight;

   vector <Rock*> rock;
   vector<Bullet> bullets;

   void advanceRock();
   void advanceShip();
   void advanceBullet();

   // I included this

   Ship ship;



   public:

   Game(Point tl, Point br);
  

   ~Game();

   void advance();

   void handleInput(const Interface & ui);

   void draw(const Interface & ui);

   void createRock();

   float getClosestDistance(FlyingObject &obj1, FlyingObject &obj2) const;

   void collision();
   void cleanZombies();

};


#endif /* GAME_H */
