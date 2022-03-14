/***********************************************************************
* Program:
*    Checkpoint 09a, Virtual Functions
*    Brother Comeau, CS165
* Author:
*    Denis Lazo
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your classes here
class Car
{
    private:

    string name;

    public:

    Car()
    {
        name = "Unknown model";
    }

    string getName() { return name; }
    void setName(string name) { this -> name = name;}

    virtual string getDoorSpecs()
    {
       return "Unknown doors";
    }
};

class  Civic : public Car
{
    public:

    Civic(): Car()
    {
        setName("Civic");
    }

    virtual string getDoorSpecs()
    {
        return "4 doors";
    }
};

class  Odyssey : public Car
{
    public:

    Odyssey(): Car()
    {
        setName("Odyssey");
    }

    virtual string getDoorSpecs()
    {
        return "2 front doors, 2 sliding doors, 1 tail gate";
    }
};

class  Ferrari : public Car
{
    public:

    Ferrari(): Car()
    {
        setName("Ferrari");
    }

    virtual string getDoorSpecs()
    {
        return "2 butterfly doors";
    }
};

/**********************************************************************
 * Function: attachDoors
 * Purpose: This function can accept any type of Car object. It will
 *  call the appropriate functions to display the name and the doors info.
 ***********************************************************************/

// TODO: Include your attachDoors function here

void attachDoors(Car &car)
{

    cout << "Attaching doors to " << car.getName() << " - " << car.getDoorSpecs() << endl;

/*
    if(car.getName() == "Civic")
    {
        Civic *civic = new Civic();

        cout << civic -> getDoorSpecs();
    }
    else if(car.getName() == "Odyssey")
    {
        Odyssey *odyssey = new Odyssey();

        cout << odyssey -> getDoorSpecs();
    }
    else
    {
        Ferrari *ferrari = new Ferrari();
        cout << ferrari -> getDoorSpecs();
            
    }
    

    cout << endl;
*/

   return;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // You should not change main

   Civic civic;
   Odyssey odyssey;
   Ferrari ferrari;

   attachDoors(civic);
   attachDoors(odyssey);
   attachDoors(ferrari);

   return 0;
}


