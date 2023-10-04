#include "Potatoes.h"

//constructors
Potatoes::Potatoes(){

    //<name>
    cost_per_day = 20;  //20 gold per day to upkeep one Land of Potatoes
    selling_price = 35;    //225 gold to sell when fully grown, 35 gold to sell otherwise
    buying_price = 35;  //35 gold to buy a Potato seed
    growth_stage = 0;   //always initialises with a growth stage of 0

}

//functions
// int Potatoes::getGrowthSpeed(Farm f1){
//     //the case for standard soil

//     if(f1.getHasGoodSoil() == 0){
//         //potatoes thrive in any environment and grow the fastest and most consistently
//         return 2;
//     }

//     //the case for good soil
//     else {
//         return 4;
//     }
// }