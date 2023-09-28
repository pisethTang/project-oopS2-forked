#include "Land.h"
#include "Produce.h"
#include "Wheat.h"
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"

//constructors
Land::Land(){
    empty_or_used = 0;
    unlocked = 0;
    
    //<put a produce here?? but need to initialise with nothing so that the produce can change>
}

bool Land::getEmptyOrUsed(){
    return empty_or_used;
}

void Land::setEmptyOrUsed(bool a){
    empty_or_used = a;
}

bool Land::getUnlocked(){
    return unlocked;
}

void Land::setUnlocked(bool b){
    unlocked = b;
}

void Land::setProduce(Produce newPlanted){
    planted = newPlanted;
}

void Land::plantProduce(int produceIteration, Farm farm){

    if (empty_or_used == 0){    //will only plant if this Land is empty

        //1 is wheat, 2 is carrots, 3 is potatoes, 4 is chickens, 5 is cows, 6 is sheep

        //<I get errors if I initialise in the switch, which sucks bc i don't want to initialise all this>
        Wheat z;
        Carrots y;
        Potatoes x;
        Chickens w;
        Cows v;
        Sheep u;

        switch (produceIteration) {
            case 1: //Wheat
                if (farm.getMoney() <= z.getBuyingPrice()){
                    //spend money
                    farm.setMoney(farm.getMoney() - z.getBuyingPrice());

                    //make land used
                    setEmptyOrUsed(1);

                    //make Produce a Wheat
                    planted = z;    //<is this right?>
                }
            break;
            case 2: //Carrots
                if (farm.getMoney() <= y.getBuyingPrice()){
                    //spend money
                    farm.setMoney(farm.getMoney() - y.getBuyingPrice());

                    //make land used
                    setEmptyOrUsed(1);

                    //make Produce a Carrots
                    planted = y;    //<is this right?>
                }
            break;
            case 3: //Potatoes
                if (farm.getMoney() <= x.getBuyingPrice()){
                    //spend money
                    farm.setMoney(farm.getMoney() - x.getBuyingPrice());

                    //make land used
                    setEmptyOrUsed(1);

                    //make Produce a Potatoes
                    planted = x;    //<is this right?>
                }
            break;
            case 4: //Chickens
                if (farm.getMoney() <= w.getBuyingPrice()){
                    //spend money
                    farm.setMoney(farm.getMoney() - w.getBuyingPrice());

                    //make land used
                    setEmptyOrUsed(1);

                    //make Produce a Chickens
                    planted = w;    //<is this right?>
                }
            break;
            case 5: //Cows
                if (farm.getMoney() <= v.getBuyingPrice()){
                    //spend money
                    farm.setMoney(farm.getMoney() - v.getBuyingPrice());

                    //make land used
                    setEmptyOrUsed(1);

                    //make Produce a Cows
                    planted = v;    //<is this right?>
                }
            break;
            case 6: //Sheep
                if (farm.getMoney() <= u.getBuyingPrice()){
                    //spend money
                    farm.setMoney(farm.getMoney() - u.getBuyingPrice());

                    //make land used
                    setEmptyOrUsed(1);

                    //make Produce a Sheep
                    planted = u;    //<is this right?>
                }
            break;
        }
    }

    return;
}

void Land::harvestProduce(){

    //it gives money to be sold
    if (getEmptyOrUsed() == 1){ //ensures it's used before giving player money
        //<can't access getGrowthSpeed. not sure how to do this>
    }

    //this function doesn't delete the produce, but rather allows it to be written over
    setEmptyOrUsed(0);
}