#ifndef CARROTS_H
#define CARROTS_H

#include "Crops.h"

class Carrots : public Crops {

    private:

    public:
    //constructors
    Carrots();

    //functions
    int getGrowthSpeed(bool goodSoil, int dayNum) override;
    // void setSellingPrice();

};

#endif