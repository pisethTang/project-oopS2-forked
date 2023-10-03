#include "Farm.h"
#include <SFML/Graphics.hpp>

using namespace sf;

//constructors
Farm::Farm(){
    //name = "";
    lands = new Land[max_land];
}

// Farm::Farm(std::string new_name){    //<evaluate this and see if needed>
//     //name = new_name;
//     lands = new Land[max_land];
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

            // <change the land vector>

            //add the new land
            setCurrentLand(getCurrentLand() + 1);
        }
    }
}

// game window
void Farm::run(){
    while (win->isOpen()){
        Event e;
        while(win->pollEvent(e)){
            if(e.type==Event::Closed){
                win->close();
            }
    // <add keyboard functions>
        }
        win->clear();
        win->display();
    }
}

void Farm::changeDay(){
    //setting the new day number
    setDayNum(getDayNum() + 1);

    //for loop going through the whole land vector, checking each type and affecting money appropriately

    for(int i = 0; i < max_land; i++){
        if (lands[i].getEmptyOrUsed() == 1){
            //<is this going to work??>
            setMoney(getMoney() - lands[i].getPlanted().getCostPerDay());
            //setMoney(getMoney() + ) //<something for only the Animals having money given per day>
        }
    }
}

void Farm::moveTime(){
    setTimeOfDay(getTimeOfDay() + 1);

    if (getTimeOfDay() == 3){
        setTimeOfDay(0);
        changeDay();
    }
}

//destructor
Farm::~Farm(){
    delete[] lands;
}