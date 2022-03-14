#include "rocks.h"

// Put your Rock methods here

void BigRock :: hit( vector <Rock*> & rock)
{
             Rock * rocas = new MediumRock(getPoint(), getVelocity(), getAngle());
             rocas -> setPoint(getPoint());
             Velocity v1 ((getVelocity().getDx()), (getVelocity().getDy()) + 1);
             rocas -> setVelocity(v1);
             rock.push_back(rocas);
              


            Rock * rocas2 = new MediumRock(getPoint(), getVelocity(), getAngle());
             rocas2 -> setPoint( getPoint());
             Velocity v2 ((getVelocity().getDx()), (-(getVelocity().getDy())) - 1);
             rocas2 -> setVelocity(v2);
             rock.push_back(rocas2);

             Rock * rocas3 = new SmallRock(getPoint(), getVelocity(), getAngle());
             rocas3 -> setPoint(getPoint());
             Velocity v3 ((getVelocity().getDx()) + 1, (getVelocity().getDy()));
             rocas3 -> setVelocity(v3);
             rock.push_back(rocas3);
              


   
}

void MediumRock :: hit( vector <Rock*> & rock)
{
             Rock * rocas = new SmallRock(getPoint(), getVelocity(), getAngle());
             rocas -> setPoint(getPoint());
             Velocity v1 ((getVelocity().getDx()), (getVelocity().getDy()) + 1);
             rocas -> setVelocity(v1);
             rock.push_back(rocas);
              

 

             Rock * rocas2 = new SmallRock(getPoint(), getVelocity(), getAngle());
             rocas2 -> setPoint( getPoint());
             Velocity v2 ((getVelocity().getDx()), (-(getVelocity().getDy())) - 1);
             rocas -> setVelocity(v2);
             rock.push_back(rocas2);
   
}

void SmallRock :: hit( vector <Rock*> & rock)
{
             
}