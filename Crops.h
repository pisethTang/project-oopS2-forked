#ifndef CROPS_H
#define CROPS_H

// #include "Farm.h"
#include "Produce.h"
#include <string>

class Crops : public Produce{

    protected:
    int growth_stage;
    //int future_sell_price;

    public:
    //constructors
    Crops();
    Crops(string newName, int newCost, int newSellPrice, int newBuyPrice);

    //functions
    int getGrowthStage();
    // int getFutureSellPrice();

    void setGrowthStage(int newGrowthStage);    //<add growth speed stuff>

    // virtual void setSellingPrice() = 0;

    virtual int getGrowthSpeed(bool goodSoil, int dayNum) = 0;

    //destructor

};

#endif