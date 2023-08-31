#include "Vehicle.h"
#include <iostream>
using namespace std;

//VEHICLE_H
//defining constructors
Vehicle::Vehicle(){
    //define variables
    timeOfEntry = time(0);
    ID = 0;
}

Vehicle::Vehicle(int ID_num){
    //define variables
    timeOfEntry = time(0);
    ID = ID_num;
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
    // //initialise variables
    // time_t timeOfDepature;
    // int duration;

    // //define variables
    // timeOfDepature = time(0);
    // duration = timeOfDepature - getTimeOfEntry();

    // //test line
    // cout << timeOfDepature << " " << getTimeOfEntry() << " " << timeOfDepature - getTimeOfEntry() << "\n";
    //cout << "Vehicle\n";

    return 0;
}