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
    int getValuePerDay(bool goodFood, int dayNum) override;
    //<four functions, one for good normal value, one for bad normal value, one for every four
    //days good value, and one for every four days bad value>
    int getGarbage() override;

};

#endif