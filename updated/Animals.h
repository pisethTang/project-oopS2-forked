#ifndef ANIMALS_H
#define ANIMALS_H

#include "Produce.h"
#include "Farm.h"

class Animals : public Produce{

    protected:
    int value_per_day;  //the value that the player recieves each day for having an Animal in a Land

    public:
    //constructors
    Animals();
    Animals(int newCost, int newSellPrice, int newBuyPrice, int newValue);

    //functions
    int getGarbage() override;
    //std::string getName(); //<do NOT remove this>
    virtual int getValuePerDay(bool goodSoil, int dayNum) = 0;

    //destructor

};

#endif