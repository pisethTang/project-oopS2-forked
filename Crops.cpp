#include "Crops.h"
#include "Farm.h"
#include "Produce.h"
#include <string>

//constructors
Crops::Crops(){
    name = "";
    cost_per_day = 0;
    selling_price = 0;
    buying_price = 0;
    growth_stage = 0;
}

Crops::Crops(string newName, int newCost, int newSellPrice, int newBuyPrice){
    name = newName;
    cost_per_day = newCost;
    selling_price = newSellPrice;
    buying_price = newBuyPrice;
    growth_stage = 0;
}

//functions
int Crops::getGrowthStage(){
    return growth_stage;
}

void Crops::setGrowthStage(int newGrowthStage){
    if ((getGrowthStage() + newGrowthStage) <= 10){      //growth_stage cannot be greater than 10 (chosen arbitrarily)
        growth_stage = getGrowthStage() + newGrowthStage;
    }
}

//<need something here to change the selling price>