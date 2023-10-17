#ifndef CHICKENS_H
#define CHICKENS_H

#include "Animals.h"

class Chickens : public Animals{

    private:

    public:
    // constructor
    Chickens();
    
    //functions
    int getValuePerDay(bool good_food, int day_num) override;
    int getGarbage() override;

};

#endif