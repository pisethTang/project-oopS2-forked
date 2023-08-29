#include "Vehicle.h"
#include "Motorbike.h"
#include <iostream>

using namespace std;

//MOTORBIKE_H
//defining constructors
Motorbike::Motorbike(){
    //initialise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = 0;
}

Motorbike::Motorbike(int ID){
    //initalise variables
    time_t timeOfEntry;
    int ID_num;

    //define variables
    timeOfEntry = time(NULL);
    ID_num = ID;
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

    //test line
    cout << "Motorbike\n";

    return duration;

}