#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot{

    private:
    Vehicle** vehicle;
    int max;
    int count;

    public:
    
    //constructors
    ParkingLot(int newMax);

    //functions
    int getCount();

    int getMax();

    void setVehicle(Vehicle* b, int c);

    Vehicle** getVehicle();

    void parkVehicle(Vehicle* k);

    void unparkVehicle(int ID);
};

#endif