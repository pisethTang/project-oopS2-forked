#include "Wheat.h"

//constructors
Wheat::Wheat(){
    //wheat is the cheapest produce to buy and gives the least amount of money

    //<name>
    cost_per_day = 15;  //15 gold per day to upkeep one Land of Wheat
    selling_price = 10;    //125 gold to sell when fully grown, 10 gold to sell otherwise
    buying_price = 10;  //10 gold to buy a Wheat seed
    growth_stage = 0;   //always initialises with a growth stage of 0

}

//functions
int Wheat::getGrowthSpeed(Farm f1){
    //the case for standard soil
    if (f1.getHasGoodSoil() == 0) {

        //The wheat needs sunny days, and every third day is very sunny
        //When it is sunny it grows 3 units, and when it is not it grows 1
        if ((f1.getDayNum() % 3) == 0){
            return 3;
        }
        else {
            return 1;
        }
    }

    //the case for good soil
    else {
        if ((f1.getDayNum() % 3) == 0){
            return 6;
        }
        else {
            return 2;
        }
    }
}