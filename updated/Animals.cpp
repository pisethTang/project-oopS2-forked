#include "Animals.h"
#include "Produce.h"

//constructors
Animals::Animals(){
    name = "animal";
    cost_per_day = 0;
    selling_price = 0;
    buying_price = 0;
    value_per_day = 0;
}

Animals::Animals(int newCost, int newSellPrice, int newBuyPrice, int newValue){
    name = "animal";
    cost_per_day = newCost;
    selling_price = newSellPrice;
    buying_price = newBuyPrice;
    value_per_day = newValue;
}

//functions
int Animals::getGarbage(){
    return 1;
}

// std::string Animals::getName(){
//     return "name";  //<can't remove this>
// }