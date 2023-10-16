#include "Cows.h"

//constructors
Cows::Cows(){

    name = "animal";
    cost_per_day = 25;   //cows cost a lot for upkeep
    selling_price = 175; //can sell the cows for 175 gold each
    buying_price = 175; //costs 175 gold to buy cows

}

//functions
int Cows::getValuePerDay(bool goodFood, int dayNum){
    //the case for standard food

    if (goodFood == 0){
        //the cows only give milk every 7 days, and before the food is upgraded they aren't worth it
        if ((dayNum % 7) == 0){
            return 150;
        }
        else {
            return 0;
        }
    }

    //the case for good food
    else {
        if ((dayNum % 7) == 0){
            return 300;
        }
        else {
            return 0;
        }
    }
}

int Cows::getGarbage(){
    return 4;
}