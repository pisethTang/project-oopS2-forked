#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirCraft.h"

class AirFleet{

    protected:
    AirCraft **fleet;

    public:
    AirFleet();                      
/* creates an air fleet containing pointers to 5 AirCraft objects as an array; 
*/

    AirCraft **get_fleet();
    };      // returns the array of pointers to the five aircraft objects

#endif