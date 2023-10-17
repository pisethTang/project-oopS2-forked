#ifndef POTATOES_H
#define POTATOES_H

#include "Farm.h"
#include "Crops.h"

class Potatoes : public Crops{

    private:

    public:
    //constructors
    Potatoes();

    //functions
    int getGrowthSpeed(bool goodSoil, int dayNum) override;
    // void setSellingPrice();
    int getGarbage() override;

};

#endif