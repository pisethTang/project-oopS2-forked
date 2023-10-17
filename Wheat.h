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
    int getGrowthSpeed(bool good_soil, int day_num) override;
    //the growth stage updates when the changeDay() function is called
    // void setSellingPrice();
    int getGarbage() override;

};

#endif