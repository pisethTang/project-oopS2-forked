#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirCraft.h"

class Airplane : public AirCraft{

    protected:
    int numPassengers;

    public:
    Airplane();
    Airplane(int w, int p);

    int getNumPassengers();
    void reducePassengers(int x);     // reduce passenger list by x
    int get_numPassengers();
    void fly(int headwind, int minutes);

};

#endif