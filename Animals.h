#ifndef ANIMALS_H
#define ANIMALS_H

#include "Produce.h"

class Animals : public Produce{

    protected:
    int value_per_day;  //the value that the player recieves each day for having an Animal in a Land

    public:
    //constructors
    Animals();
    Animals(string newName, int newCost, int newSellPrice, int newBuyPrice, int newValue);

    //functions
    virtual int getValuePerDay() = 0;
    void setValuePerDay(int newValue);  //function used when food upgrade is given

    //destructor

};

#endif