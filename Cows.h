#ifndef COWS_H
#define COWS_H

#include "Animals.h"
#include "Farm.h"

class Cows: public Animals{
    private:
        
    public:
    //constructors
    Cows();

    //functions
    int getValuePerDay(Farm f1);

};

#endif