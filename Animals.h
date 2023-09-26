#ifndef ANIMALS_H
#define ANIMALS_H

#include "Produce.h"

class Animals : public Produce{

    protected:
    int value_per_day;  //the value that the player recieves each day for having an Animal in a Land

    private:
    //constructors
    Animals();
    Animals(string newName, int newCost, int newSellPrice, int newBuyPrice, int newValue);

    //functions
    int getValuePerDay();
    void setValuePerDay(int newValue);  //function used when food upgrade is given

    //destructor

};

#endif