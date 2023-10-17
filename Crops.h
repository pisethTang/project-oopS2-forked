#ifndef CROPS_H
#define CROPS_H

// #include "Farm.h"
#include <iostream>
#include "Produce.h"
#include <string>

class Crops : public Produce{
    protected:
    int growth_stage;
    int future_sell_price;

    public:
    //constructors
    Crops();
    Crops(int newCost, int newSellPrice, int newBuyPrice);  //<not sure we ever use this?>

    //functions
    int getGrowthStage();
    int getFutureSellPrice();
    void setGrowthStage(int newGrowthStage);
    void updateSellPrice(); //<need to check that this works for inherited classes, we could perhaps make it virtual?>
    virtual int getGrowthSpeed(bool goodSoil, int dayNum) = 0;

    //destructor

};

#endif