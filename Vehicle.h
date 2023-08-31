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
    void setID(int IDnum);
    time_t getTimeOfEntry();
    void setTimeOfEntry(time_t time);
    virtual int getParkingDuration();

    //destructor

};

#endif