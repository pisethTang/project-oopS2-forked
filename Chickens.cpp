#include "Chickens.h"

Chickens::Chickens(){

    //<name>
    cost_per_day = 10;   //chickens don't require much upkeep
    selling_price = 125; //can sell the chickens for 125 gold each
    buying_price = 125; //costs 125 gold to buy chickens

}

int Chickens::getValuePerDay(Farm f1){
    //the case for standard food

    if (f1.getHasGoodSoil() == 0){
        //the chickens will be unhappy once a week, and that day it will break even
        if ((f1.getDayNum() % 7) == 0){
            return 10;
        }
        else {
            return 35;
        }
    }

    //the case for good food
    else {
        if ((f1.getDayNum() % 7) == 0){
            return 20;
        }
        else {
            return 70;
        }
    }
}