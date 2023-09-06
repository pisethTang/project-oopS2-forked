#include "AirFleet.h"
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"

//constructors
AirFleet::AirFleet(){
    fleet[1] = new Airplane(20, 10);
    fleet[2] = new Helicopter(10000, "BlackHawk"); 
    fleet[3] = new AirCraft(5000);
    fleet[4] = new Helicopter(100, "WhiteHawk");
    fleet[5] = new Airplane(15, 20);
}

//functions
AirCraft** AirFleet::get_fleet(){
    return fleet;
}