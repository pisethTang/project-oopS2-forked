#ifndef FARM_H
#define FARM_H

#include <string>

class Farm{
    protected:
    std::string name;
    int max_land;
    int current_land;
    int day_num;    //starts at zero, goes up
    int time;   //int between 0 and 3, when it hits 3 num_days++
    int money;  //start with 1000, can't be less than zero

    bool has_good_soil;
    bool has_good_food; //these variables make produce grow faster

    public:
    //constructors
    Farm();
    Farm(std::string new_name);

    // setters
    void set_farm_name(std::string name);
    
    // getters
    std::string get_farm_name();
    //functions


    //destructor

};

#endif