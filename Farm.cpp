#include "Farm.h"

//constructors
Farm::Farm()
    :Farm(""){};

Farm::Farm(std::string new_name){
    name = new_name;
}

// getters
std::string Farm::getName(){
    return name;
}

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
// void set_farm_name(std::string name); //Not sure we need this one?
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

            // <change the land vector>

            //add the new land
            setCurrentLand(getCurrentLand() + 1);
        }
    }
}

//destructor
