#ifndef SHEEP_H
#define SHEEP_H

#include "Animals.h"
#include "Farm.h"

class Sheep : public Animals{

    private:

    public:
    //constructors
    Sheep();

    //functions
    int getValuePerDay(bool good_food, int day_num) override;
    int getGarbage() override;

};

#endif