#include "Vehicle.h"
#include <iostream>
using namespace std;

//VEHICLE_H
//defining constructors
Vehicle::Vehicle(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Vehicle::Vehicle(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
}

//functions
int Vehicle::getID(){
    return ID;
}

time_t Vehicle::getTimeOfEntry(){
    return timeOfEntry;
}

//virtual function
int Vehicle::getParkingDuration(){ //is this function necessary?? I never call it?? how does virtual work
    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    reduced_duration = 0.75*duration;
    duration = reduced_duration;

    //test line
    cout << "Vehicle\n";

    return duration;
}