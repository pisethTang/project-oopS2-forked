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
    Crops(int new_cost, int new_sell_price, int new_buy_price);

    //functions
    int getGrowthStage();
    int getFutureSellPrice();
    void setGrowthStage(int new_growth_stage);
    void updateSellPrice();
    virtual int getGrowthSpeed(bool good_soil, int day_num) = 0;

    //destructor

};

#endif