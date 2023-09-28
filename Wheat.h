#ifndef WHEAT_H
#define WHEAT_H

#include "Farm.h"
#include "Crops.h"

class Wheat : public Crops {

    private:

    public:
    //constructors
    Wheat();

    //functions
    int getGrowthSpeed(Farm f1);
    //<need to make a way to update the growth stage and the selling price>

};

#endif