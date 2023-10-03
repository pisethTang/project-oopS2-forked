#ifndef CHICKENS_H
#define CHICKENS_H

#include "Animals.h"

class Chickens : public Animals{

    private:

    public:
    // constructor
    Chickens();
    
    //functions
    int getValuePerDay(Farm f1) override;

};

#endif