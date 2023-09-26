#include "Carrots.h"
#include "Farm.h"

//constructors
Carrots::Carrots(){
    //carrots are slow growing, and more expensive than wheat to maintain, but gives more money

    //<name>
    cost_per_day = 10;  //10 gold per day to upkeep one Land of Carrots
    selling_price = 25;    //175 gold to sell when fully grown, 25 gold to sell otherwise
    buying_price = 25;  //25 gold to buy a Carrot seed
    growth_stage = 0;   //always initialises with a growth stage of 0

};

//functions
int Carrots::getGrowthSpeed(Farm f1){
    //the case for standard soil

    if (f1.getHasGoodSoil() == 0){
        //carrots need rain, it rains every 4 days, thus the growth speed is faster on those days
        if (f1.getDayNum() % 4 == 0){
            return 2;
        }
        else {
            return 1;
        }
    }

    //the case for good soil
    else {
        if (f1.getDayNum() % 4 == 0){
            return 4;
        }
        else {
            return 2;
        } 
    }

}