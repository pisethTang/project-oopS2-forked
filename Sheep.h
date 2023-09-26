#ifndef SHEEP_H
#define SHEEP_H

#include "Animals.h"

class Sheep : public Animals{

    private:

    public:
    int getValuePerDay();   //this function is virtual as the price of wool fluctuates

};

#endif