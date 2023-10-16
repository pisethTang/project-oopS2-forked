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

Animals::Animals(int new_cost, int new_sell_price, int new_buy_price, int new_value){
    name = "animal";
    cost_per_day = new_cost;
    selling_price = new_sell_price;
    buying_price = new_buy_price;
    value_per_day = new_value;
}

//functions
int Animals::getGarbage(){
    return 1;
}

// std::string Animals::getName(){
//     return "name";  //<can't remove this>
// }