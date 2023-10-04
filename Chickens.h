#ifndef CHICKENS_H
#define CHICKENS_H

#include "Animals.h"

class Chickens : public Animals{

    private:

    public:
    // constructor
    Chickens();
    
    //functions
    int getValuePerDay(bool goodFood, int dayNum) override;

};

#endif