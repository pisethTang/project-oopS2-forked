#include "Vehicle.h"
#include "Bus.h"
#include <iostream>

using namespace std;

//BUS_H
//defining constructors
Bus::Bus(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Bus::Bus(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
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

    //test line
    cout << "Bus\n";

    return duration;

}