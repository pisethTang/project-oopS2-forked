#ifndef FARM_H
#define FARM_H

#include "Land.h"
#include <SFML/Graphics.hpp>
#include <string>

class Farm{
    protected:
    std::string name;
    int max_land;
    int current_land;
    int day_num;    //starts at zero, goes up
    int time_of_day;   //int between 0 and 3, when it hits 3 num_days++
    int money;  //start with 1000, can't be less than zero
    Land* lands;    //a vector of Land, of size max_land

    bool has_good_soil;
    bool has_good_food; //these variables make produce grow faster

    sf::RenderWindow* win; // game window

    public:
    //constructors
    Farm();
    Farm(std::string new_name);
    
    // getters
    std::string getName();
    int getDayNum();
    int getTimeOfDay();
    int getMaxLand();
    int getCurrentLand();
    int getMoney();
    bool getHasGoodSoil();
    bool getHasGoodFood();

    // setters
    void setDayNum(int newDay);
    void setTimeOfDay(int newTime);
    void setMoney(int newMoney);
    void setCurrentLand(int newLand);
    void setGoodSoil(bool newSoil);
    void setGoodFood(bool newFood);

    //functions
    void buyNewLand(); //This is going to add a land to the land vector, take away money, and 
                       //change current land

    //<Put these on the diagram>
    void changeDay();   //this function adds one to the day counter, gives the user one day's worth of
                        //money from their animals, and takes away money for upkeep
    void moveTime();    //this function progresses time by one unit, checks if the day has ended,
                        //and calls the changeDay() function if the day has ended

    // game window
    void run();

    //destructor
    ~Farm();

};

#endif