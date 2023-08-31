#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle{

    public:
    //empty constructor
    Car();

    //constructor
    Car(int ID);

    //functions
    int getParkingDuration();

};

#endif