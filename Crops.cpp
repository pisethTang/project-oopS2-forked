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

Crops::Crops(int new_cost, int new_sell_price, int new_buy_price){
    name = "crop";
    cost_per_day = new_cost;
    selling_price = new_sell_price;
    buying_price = new_buy_price;
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

void Crops::setGrowthStage(int new_growth_stage){
    if ((getGrowthStage() + new_growth_stage) <= 10){      //growth_stage cannot be greater than 10 (chosen arbitrarily)
        growth_stage = getGrowthStage() + new_growth_stage;
    }
    else {
        growth_stage = 10;
    }
}

void Crops::updateSellPrice(){
    setSellingPrice(getFutureSellPrice());
}