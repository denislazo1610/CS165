/*****************************************************
 * File: pair.h
 *
 * Purpose: Defines a Pair template class that can hold
 *   two items of arbitrary data types.
 ******************************************************/

#ifndef PAIR_H
#define PAIR_H

// TODO: Fill in this class

template <class C1 , class C2>
class Pair
{
    private:

    C1 first;
    C2 second;

// Put all of your method bodies right in this file

    public:

    C1 getFirst() { return first;}

    void setFirst(C1 first) { this -> first = first;}

    C2 getSecond() { return second;}

    void setSecond(C2 second) { this -> second = second;}

    void display()
    {
        cout << first << " - " << second;
    }

};

#endif // PAIR_H
