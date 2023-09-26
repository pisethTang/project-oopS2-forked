#ifndef CHICKENS_H
#define CHICKENS_H

#include "Animals.h"

class Chickens : public Animals{

    private:

    public:
    virtual int getValuePerDay() = 0;

};

#endif