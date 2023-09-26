#include "Cows.h"

//constructors
Cows::Cows(){

    //<name>
    cost_per_day = 25;   //cows cost a lot for upkeep
    selling_price = 175; //can sell the cows for 175 gold each
    buying_price = 175; //costs 175 gold to buy cows

}

//functions
int Cows::getValuePerDay(Farm f1){
    //the case for standard food

    if (f1.getHasGoodSoil() == 0){
        //the cows only give milk every 7 days, and before the food is upgraded they aren't worth it
        if ((f1.getDayNum() % 7) == 0){
            return 150;
        }
        else {
            return 0;
        }
    }

    //the case for good food
    else {
        if ((f1.getDayNum() % 7) == 0){
            return 300;
        }
        else {
            return 0;
        }
    }
}