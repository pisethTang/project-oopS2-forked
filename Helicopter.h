#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirCraft.h"
#include <string>

class Helicopter:AirCraft{

    protected:
    std::string name;

    public:
    Helicopter();
    Helicopter(int w, std::string n);

    std::string get_name();
    void set_name(std::string newName);
    void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)

};

#endif