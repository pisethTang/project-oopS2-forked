#include "Farmland.h"

//constructors
Farmland::Farmland(){
    empty_or_used = 0;
    unlocked = 0;
    
    //<put a produce here?? but need to initialise with nothing so that the produce can change>
}

//getters and setters
bool Farmland::getEmptyOrUsed(){
    return empty_or_used;
}

void Farmland::setEmptyOrUsed(bool a){
    empty_or_used = a;
}

bool Farmland::getUnlocked(){
    return unlocked;
}

Produce* Farmland::getPlanted(){    //<this is edited from return planted, let's see if this works>    
    return planted;
}

void Farmland::setUnlocked(bool b){
    unlocked = b;
}

void Farmland::setProduce(Produce* new_planted){
    planted = new_planted;
}

//functions