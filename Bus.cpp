#include "Vehicle.h"
#include "Bus.h"
#include <iostream>

using namespace std;

//BUS_H
//defining constructors
Bus::Bus(){
    //define variables
    timeOfEntry = time(NULL);
    ID = 2;
}

Bus::Bus(int ID_num){
    //define variables
    timeOfEntry = time(NULL);
    ID = ID_num;
}

//functions
int Bus::getParkingDuration(){

    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    reduced_duration = 0.75*duration;
    duration = reduced_duration;

    return duration;

}