#ifndef FARMLAND_H
#define FARMLAND_H

#include "Produce.h"

class Farmland{
    protected:
    bool empty_or_used;
    bool unlocked;
    Produce* planted;

    public:
    //constructors
    Farmland();     //initialises without produce, and empty

    //functions
    bool getEmptyOrUsed();
    void setEmptyOrUsed(bool a);
    bool getUnlocked();
    Produce* getPlanted();
    void setUnlocked(bool b);
    void setProduce(Produce* new_planted);

    //destructor
    ~Farmland();
};

#endif