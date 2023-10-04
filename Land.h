#ifndef LAND_H
#define LAND_H

#include "Produce.h"
#include "Crops.h"
#include "Animals.h"
//#include "Farm.h"

//class Farm; //<if this doesn't work, we need to rework the Farm class entirely>


// Produce can't access staffs in Land...?
// Land can't access staffs in Farm?

// Farm = {L1, L2, ... Ln}
// L = {P1, P2, ...}
// Produce = {Crop, Animal}
//  
// 
// 
// 
// 
// 

class Land{
    protected:
    bool empty_or_used;
    bool unlocked;
    Produce planted;

    public:
    //constructors
    Land();     //initialises without produce, and empty
    //functions
    bool getEmptyOrUsed();
    void setEmptyOrUsed(bool a);
    bool getUnlocked();
    Produce getPlanted();
    void setUnlocked(bool b);
    void setProduce(Produce newPlanted);
    //<put the above in the diagram>

    void harvestProduce(); //this function removes the produce and adds money

    //destructor

};

#endif