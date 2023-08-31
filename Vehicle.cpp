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
    timeOfEntry = time(0);
    ID_num = 0;
}

Vehicle::Vehicle(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(0);
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

    //define variables
    timeOfDepature = time(0);
    duration = timeOfDepature - getTimeOfEntry();

    //test line
    cout << timeOfDepature << " " << getTimeOfEntry() << " " << timeOfDepature - getTimeOfEntry() << "\n";
    cout << "Vehicle\n";

    return duration;
}