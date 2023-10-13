#include "Sheep.h"

//constructors
Sheep::Sheep(){

    name = "animal";
    cost_per_day = 35;   //sheep cost the most for upkeep
    selling_price = 200; //can sell the sheep for 200 gold each
    buying_price = 200; //costs 200 gold to buy sheep, but they are the most worth it

}

//functions
int Sheep::getValuePerDay(bool goodFood, int dayNum){
//the case for standard food

    if (goodFood == 0){
        //the sheep give wool every four days, without good soil this barely gives more
        if ((dayNum % 4) == 0){
            return 175;
        }
        else {
            return 0;
        }
    }

    //the case for good food
    else {
        if ((dayNum % 4) == 0){
            return 350;
        }
        else {
            return 0;
        }
    }
}

int Sheep::getGarbage(){
    return 10;
}