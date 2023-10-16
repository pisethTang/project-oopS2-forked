#include "Farmland.h"

//constructors
Farmland::Farmland(){
    empty_or_used = 0;
    unlocked = 0;
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

Produce* Farmland::getPlanted(){  
    Produce* a = planted;
    
    return a;
}

void Farmland::setUnlocked(bool b){
    unlocked = b;
}

void Farmland::setProduce(Produce* new_planted){
    planted = new_planted;
}

//functions

Farmland::~Farmland(){
    delete[] planted;
}