#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle{

    public:
    //empty constructor
    Motorbike();

    //constructor
    Motorbike(int ID);

    //functions
    int getParkingDuration();

};

#endif