#include "Wheat.h"

//constructors
Wheat::Wheat(){
    //wheat is the cheapest produce to buy and gives the least amount of money

    //<name>
    cost_per_day = 15;  //15 gold per day to upkeep one Land of Wheat
    selling_price = 10;    //125 gold to sell when fully grown, 10 gold to sell otherwise
    future_sell_price = 125;
    buying_price = 10;  //10 gold to buy a Wheat seed
    growth_stage = 0;   //always initialises with a growth stage of 0

}

//functions
int Wheat::getGrowthSpeed(bool goodSoil, int dayNum){ //<Can only be used in something above Farm?
                                    //or we store hasGoodSoil in something else? land maybe?
                                    //we could put this function into land and have it be 
                                    //an if statement, but that would remove the virtual function
                                    //which we need>
    //the case for standard soil
    if (goodSoil == 0) {

        //The wheat needs sunny days, and every third day is very sunny
        //When it is sunny it grows 3 units, and when it is not it grows 1
        if ((dayNum % 3) == 0){
            return 3;
        }
        else {
            return 1;
        }
    }

    //the case for good soil
    else {
        if ((dayNum % 3) == 0){
            return 6;
        }
        else {
            return 2;
        }
    }
}

// void Wheat::setSellingPrice(){
//     selling_price = getFutureSellPrice();   //<we need to test that this is working as it should>
// }