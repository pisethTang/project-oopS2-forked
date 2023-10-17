#ifndef FARM_H
#define FARM_H

#include "Farmland.h"
#include <string>

class Farm{
    protected:
    Farmland* lands;    //an array of Land, of size max_land
    int max_land;
    int current_land;
    int day_num;    //starts at zero, goes up
    int time_of_day;   //int between 0 and 3, when it hits 3 num_days++
    int money;  //start with 1000, can't be less than zero
    std::string top_row[10]; //for user interface
    std::string middle_row[10];
    std::string bottom_row[10];

    bool has_good_soil;
    bool has_good_food; //these variables make produce grow faster

    public:
    //constructors
    Farm();
    
    // getters
    int getDayNum();
    int getTimeOfDay();
    int getMaxLand();
    int getCurrentLand();
    int getMoney();
    bool getHasGoodSoil();
    bool getHasGoodFood();
    std::string getTopRow(int i);
    std::string getMiddleRow(int i);
    std::string getBottomRow(int i);
    Farmland* getLands();

    // setters
    void setDayNum(int new_day);
    void setTimeOfDay(int new_time);
    void setMoney(int new_money);
    void setCurrentLand(int new_land);
    void setGoodSoil(bool new_soil);
    void setGoodFood(bool new_food);
    void setTopRow(int i, std::string new_string);
    void setMiddleRow(int i, std::string new_string);
    void setBottomRow(int i, std::string new_string);

    //functions
    void buyNewLand(); //This is going to add a land to the land array, take away money, and 
                       //change current land

    void changeDay();   //this function adds one to the day counter, gives the user one day's worth of
                        //money from their animals, and takes away money for upkeep
                        //it also allows crops to grow
    void moveTime();    //this function progresses time by one unit, checks if the day has ended,
                        //and calls the changeDay() function if the day has ended
    void plantProduce(int produce_iteration);    //Also takes away money and only does the following:
                                                //this function finds the first available element in
                                                //the Land vector and assigns that pointer to a produce
                                                //of iteration produce_iteration
    void harvestProduce(int index); //this function removes the produce and adds money

    //destructor
    ~Farm();

};
;
#endif