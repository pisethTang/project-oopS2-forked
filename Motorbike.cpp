#include "Vehicle.h"
#include "Motorbike.h"
#include <iostream>

using namespace std;

//MOTORBIKE_H
//defining constructors
Motorbike::Motorbike(){
    //define variables
    timeOfEntry = time(NULL);
    ID = 3;
}

Motorbike::Motorbike(int ID_num){
    //define variables
    timeOfEntry = time(NULL);
    ID = ID_num;
}

//defining functions
int Motorbike::getParkingDuration(){

    //initialise variables
    time_t timeOfDepature;
    int duration;
    double reduced_duration;

    //define variables
    timeOfDepature = time(NULL);
    duration = timeOfDepature - getTimeOfEntry();

    reduced_duration = 0.85*duration;
    duration = reduced_duration;

    return duration;

}