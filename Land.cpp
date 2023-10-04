#include "Land.h"

//constructors
Land::Land(){
    empty_or_used = 0;
    unlocked = 0;
    
    //<put a produce here?? but need to initialise with nothing so that the produce can change>
}

//getters and setters
bool Land::getEmptyOrUsed(){
    return empty_or_used;
}

void Land::setEmptyOrUsed(bool a){
    empty_or_used = a;
}

bool Land::getUnlocked(){
    return unlocked;
}

Produce Land::getPlanted(){ //<perhaps unnecesary>
    return planted;
}

void Land::setUnlocked(bool b){
    unlocked = b;
}

void Land::setProduce(Produce newPlanted){
    planted = newPlanted;
}

//functions

// void Land::harvestProduce(){

//     //it gives money to be sold
//     if (getEmptyOrUsed() == 1){     //ensures it's used before giving player money
        
//     }

//     //this function doesn't delete the produce, but rather allows it to be written over
//     setEmptyOrUsed(0);
// }