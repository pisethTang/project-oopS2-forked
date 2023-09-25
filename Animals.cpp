#include "Animals.h"

//constructors
Animals::Animals(){
    name = "";
    cost_per_day = 0;
    selling_price = 0;
    buying_price = 0;
    value_per_day = 0;
}

Animals::Animals(string newName, int newCost, int newSellPrice, int newBuyPrice, int newValue){
    name = newName;
    cost_per_day = newCost;
    selling_price = newSellPrice;
    buying_price = newBuyPrice;
    value_per_day = newValue;
}

//functions
int Animals::getValuePerDay(){
    return value_per_day;
}