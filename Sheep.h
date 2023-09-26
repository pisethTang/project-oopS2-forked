#ifndef SHEEP_H
#define SHEEP_H

#include "Animals.h"

class Sheep : public Animals{

    private:

    public:
    virtual int getValuePerDay() = 0;   //this function is virtual as the price of wool fluctuates

};

#endif