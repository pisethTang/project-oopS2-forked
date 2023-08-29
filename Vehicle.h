#ifndef VEHICLE_H
#define VEHICLE_H

#include <chrono>
using namespace std;

class Vehicle{

    private:
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

#ifndef CAR_H   //is this how you do header guards??
#define CAR_H

class Car : public Vehicle{

    private:

    public:
    //empty constructor
    Car();

    //constructor
    Car(int ID);

    //functions
    int getParkingDuration(); //maybe virtual??

};

#endif

#ifndef BUS_H
#define BUS_H

class Bus : public Vehicle{

    private:

    public:
    //empty constructor
    Bus();

    //constructor
    Bus(int ID);

    //functions
    int getParkingDuration();

};

#endif

#ifndef MOTORBIKE_H
#define MOTORBIKE_H

class Motorbike : public Vehicle{

    private:

    public:
    //empty constructor
    Motorbike();

    //constructor
    Motorbike(int ID);

    //functions
    int getParkingDuration();

};

#endif