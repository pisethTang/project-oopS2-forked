#ifndef VEHICLE_H
#define VEHICLE_H

#include <chrono>
using namespace std;

class Vehicle{

    protected:
    time_t timeOfEntry;
    int ID;

    public:
    //empty constructor
    Vehicle();

    //constructor
    Vehicle(int ID);

    //functions
    int getID();
    time_t getTimeOfEntry();
    virtual int getParkingDuration();

    //destructor

};

#endif