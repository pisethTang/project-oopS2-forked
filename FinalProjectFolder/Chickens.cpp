#include "Chickens.h"

Chickens::Chickens(){

    name = "animal";
    cost_per_day = 10;   //chickens don't require much upkeep
    selling_price = 125; //can sell the chickens for 125 gold each
    buying_price = 125; //costs 125 gold to buy chickens

}

int Chickens::getValuePerDay(bool good_food, int day_num){
    //the case for standard food
    if (good_food == 0){
        //the chickens will be unhappy once a week, and that day it will break even
        if ((day_num % 7) == 0){
            return 10;
        }
        else {
            return 35;
        }
    }

    //the case for good food
    else {
        if ((day_num % 7) == 0){
            return 20;
        }
        else {
            return 70;
        }
    }
}

int Chickens::getGarbage(){
    return 3;
}