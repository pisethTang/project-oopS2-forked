#ifndef CROPS_H
#define CROPS_H

#include "Produce.h"
#include "Farm.h"
#include <string>

class Crops : public Produce{

    protected:
    int growth_stage;

    public:
    //constructors
    Crops();    //never start with good soil type
    Crops(string newName, int newCost, int newSellPrice, int newBuyPrice);

    //functions
    int getGrowthStage();

    void setGrowthStage(int newGrowthStage);    //<add growth speed stuff>

    virtual int getGrowthSpeed(Farm f1) = 0;

    //destructor

};

#endif