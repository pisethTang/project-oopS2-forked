#ifndef FARMLAND_H
#define FARMLAND_H

#include "Produce.h"

// Produce can't access staffs in Land...?
// Land can't access staffs in Farm?

// Farm = {L1, L2, ... Ln}
// L = {P1, P2, ...}
// Produce = {Crop, Animal}

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
    void setProduce(Produce* newPlanted);

    //destructor
    ~Farmland();
};

#endif