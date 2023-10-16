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
    int getGrowthSpeed(bool good_soil, int day_num) override;
    int getGarbage() override;

};

#endif