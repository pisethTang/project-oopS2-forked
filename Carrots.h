#ifndef CARROTS_H
#define CARROTS_H

#include "Farm.h"
#include "Crops.h"

class Carrots : public Crops {

    private:

    public:
    //constructors
    Carrots();

    //functions
    int getGrowthSpeed(bool good_soil, int day_num) override;
    // std::string getName(); //<perhaps remove>
    int getGarbage() override;
    // void setSellingPrice();

};

#endif