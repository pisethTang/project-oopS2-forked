#ifndef ANIMALS_H
#define ANIMALS_H

#include "Produce.h"

class Animals : public Produce{

    protected:
    int value_per_day;

    private:
    //constructors
    Animals();
    Animals(string newName, int newCost, int newSellPrice, int newBuyPrice, int newValue);

    //functions
    int getValuePerDay();

    //destructor

};

#endif