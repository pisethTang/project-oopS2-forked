#include "Farmland.h"
#include "Farm.h"
#include "Produce.h"
#include "Wheat.h"
#include "Carrots.h"
#include "Potatoes.h"
#include "Chickens.h"
#include "Cows.h"
#include "Sheep.h"
#include <iostream>

//constructors
Farm::Farm(){
    //name = "";
    max_land = 10; //<randomly chosen>
    current_land = 2;
    day_num = 0;    //starts at zero, goes up
    time_of_day = 0;   //int between 0 and 3, when it hits 3 num_days++
    money = 1000;  //start with 1000, can't be less than zero

    has_good_soil = false;
    has_good_food = false;
    
    lands = new Farmland[max_land];
}

// Farm::Farm(std::string new_name){    //<evaluate this and see if needed>
//     //name = new_name;
//     lands = new Farmland[max_land];
//     win = new sf::RenderWindow(sf::VideoMode(100, 100), name); // setting up game window
// }

// getters

// std::string Farm::getName(){
//     return name; //possibly unnecessary
// }

int Farm::getDayNum(){
    return day_num;
}

int Farm::getTimeOfDay(){
    return time_of_day;
}

int Farm::getMaxLand(){
    return max_land;
}

int Farm::getCurrentLand(){
    return current_land;
}

int Farm::getMoney(){
    return money;
}

bool Farm::getHasGoodSoil(){
    return has_good_soil;
}

bool Farm::getHasGoodFood(){
    return has_good_food;
}

// setters
void Farm::setDayNum(int newDay){
    day_num = newDay;
    return;
}

void Farm::setTimeOfDay(int newTime){
    time_of_day = newTime;
    return;
}

void Farm::setMoney(int newMoney){
    money = newMoney;
    return;
}

void Farm::setCurrentLand(int newLand){
    current_land = newLand;
    return;
}

void Farm::setGoodSoil(bool newSoil){
    has_good_soil = newSoil;
    return;
}

void Farm::setGoodFood(bool newFood){
    has_good_food = newFood;
    return;
}

//functions
void Farm::buyNewLand(){
    if (getMoney() > 250){  //250 chosen as the price of land

        if((getCurrentLand() + 1) < getMaxLand()){  //ensure not going past max land

            //take away money
            setMoney(getMoney() - 250);

            // <change the land vector> <may not need to change land vector?>

            //add the new land
            setCurrentLand(getCurrentLand() + 1);
        }
    }
}

void Farm::changeDay(){
    //setting the new day number
    setDayNum(getDayNum() + 1);

    //iterating through Land vector, checking each type and affecting money appropriately
    for(int i = 0; i < max_land; i++){
        if (lands[i].getEmptyOrUsed() == 1){
            //<is this going to work??>
            setMoney(getMoney() - lands[i].getPlanted().getCostPerDay());

            Produce a = lands[i].getPlanted();
            Produce* produce = &a;
            Animals* animals = dynamic_cast<Animals*>(produce);
            if (animals != nullptr){
                setMoney(getMoney() + animals->getValuePerDay(getHasGoodFood(), getDayNum()));
            }
        }
    }

    //iterating through land vector, checking each type and growing crops
    for (int i = 0; i < max_land; i++){
        if (lands[i].getEmptyOrUsed() == 1){
            
            Produce b = lands[i].getPlanted();
            Produce* ptr = &b;
            Crops* crops = dynamic_cast<Crops*>(ptr);
            if (crops != nullptr){
                //if this element is a crop, increase the growth stage by the growth speed
                crops->setGrowthStage(crops->getGrowthStage() + crops->getGrowthSpeed(getHasGoodSoil(), getDayNum()));
            }
        }
    }
}

void Farm::moveTime(){  //<put this function in all the other functions>
    setTimeOfDay(getTimeOfDay() + 1);

    if (getTimeOfDay() == 3){
        setTimeOfDay(0);
        changeDay();
    }
}

void Farm::plantProduce(int produceIteration){
    //<make time move if planting succeeds>


    int planting = 0;
    int i = 0;

    while (planting == 0) {

        if (lands[i].getEmptyOrUsed() == 0){    //will only plant if this Land is empty
            planting = 1;   //ending the while loop once an empty plot is found

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
                    if (getMoney() <= z.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - z.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Wheat
                        lands[i].setProduce(z);    //<is this right?>
                    }
                    else {
                        cout << "Not enough money!\n";
                    }
                break;
                case 2: //Carrots
                    if (getMoney() <= y.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - y.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Carrots
                        lands[i].setProduce(y);    //<is this right?>
                    }
                    else {
                        cout << "Not enough money!\n";
                    }
                break;
                case 3: //Potatoes
                    if (getMoney() <= x.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - x.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Potatoes
                        lands[i].setProduce(x);    //<is this right?>
                    }
                    else {
                        cout << "Not enough money!\n";
                    }
                break;
                case 4: //Chickens
                    if (getMoney() <= w.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - w.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Chickens
                        lands[i].setProduce(w);    //<is this right?>
                    }
                    else {
                        cout << "Not enough money!\n";
                    }
                break;
                case 5: //Cows
                    if (getMoney() <= v.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - v.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Cows
                        lands[i].setProduce(v);    //<is this right?>
                    }
                    else {
                        cout << "Not enough money!\n";
                    }
                break;
                case 6: //Sheep
                    if (getMoney() <= u.getBuyingPrice()){
                        //spend money
                        setMoney(getMoney() - u.getBuyingPrice());

                        //make land used
                        lands[i].setEmptyOrUsed(1);

                        //make Produce a Sheep
                        lands[i].setProduce(u);    //<is this right?>
                    }
                    else {
                        cout << "Not enough money!\n";
                    }
                break;
            }
        }

        i++;    //iterating i;

    }

    //A notice for if there is no land
    if (planting == 0) {
        std::cout << "No available land.\n";
    }

    return;
}

void Farm::harvestProduce(int index){
    //it gives money to be sold
    if (lands[index].getEmptyOrUsed() == 1){     //ensures it's used before giving player money
        Produce b = lands[index].getPlanted();
        Produce* ptr = &b;
        Crops* crops = dynamic_cast<Crops*>(ptr);
        if (crops != nullptr){
            //if this element is a crop, get the money for selling
                setMoney(getMoney() + crops->getSellingPrice());
        }
    }

    //this function doesn't delete the produce, but rather allows it to be written over
    lands[index].setEmptyOrUsed(0);
}

//destructor
Farm::~Farm(){
    delete[] lands;
}