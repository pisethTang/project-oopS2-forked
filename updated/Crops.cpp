#include "Crops.h"
#include <string>

//constructors
Crops::Crops(){ //<let's get rid of name>
    name = "crop";
    cost_per_day = 0;
    selling_price = 0;
    buying_price = 0;
    growth_stage = 0;
    future_sell_price = 0;
}

Crops::Crops(int newCost, int newSellPrice, int newBuyPrice){
    name = "crop";
    cost_per_day = newCost;
    selling_price = newSellPrice;
    buying_price = newBuyPrice;
    growth_stage = 0;
    future_sell_price = 0;
}

//functions
int Crops::getGrowthStage(){
    return growth_stage;
}

int Crops::getFutureSellPrice(){
    return future_sell_price;
}

void Crops::setGrowthStage(int newGrowthStage){
    if ((getGrowthStage() + newGrowthStage) <= 10){      //growth_stage cannot be greater than 10 (chosen arbitrarily)
        growth_stage = getGrowthStage() + newGrowthStage;
    }
}

void Crops::updateSellPrice(){
    setSellingPrice(getFutureSellPrice());
}